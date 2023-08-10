#include "main.h"
/**
 * check_elf - checking for an ELF file
 * @e_ident: a pointer to numbers
 */
void check_elf(unsigned char *e_ident)
{
	int check;

	for (check = 0; check < 4; check++)
	{
		if (e_ident[check] != 127 &&
				e_ident[check] != 'E' &&
				e_ident[check] != 'L' &&
				e_ident[check] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - printing of magic numbers ina an ELF header
 * @e_ident: a pointer
 */
void print_magic(unsigned char *e_ident)
{
	int check;

	printf("Magic: ");

	for (check = 0; check < EI_NIDENT; check++)
	{
		printf("%02x", e_ident[check]);
		if (check == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - printing ELF header class
 * @e_ident: pointer
 */
void print_class(unsigned char *e_ident)
{
	printf("Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - printing an ELF header data
 * @e_ident: a pointer
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - printing the ELF header version
 * @e_ident: a pointer
 */
void print_version(unsigned char *e_ident)
{
	printf("Version: %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - printing the osabi
 * @e_ident: A pointer.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - system V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX -solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone app\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - printing ELF ABI header version
 * @e_ident: a pointer
 */
void print_abi(unsigned char *e_ident)
{
	printf("ABI version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the ELf header type
 * @e_type: ELF type
 * @e_ident: pointer to an array
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("Type: ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Excecutable file)\n");
			break;
		case ET_DYN:
			printf("DYN (shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (core files)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - prints the ELF header entry point
 * @e_entry: the address entry point
 * @e_ident: the pointer
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Address of entry point: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - closes an elf file
 * @elf: file descriptor for the elf file
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - to show information in an elf header
 * @argc: number of characters in system
 * @argv: a pointer
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int a, r;

	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(a, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	check_elf(header->e_ident);
	print_magic(header->e_ident);
	print_data(header->e_ident);
	print_class(header->e_ident);
	print_osabi(header->e_ident);
	print_version(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(a);
	return (0);
}
