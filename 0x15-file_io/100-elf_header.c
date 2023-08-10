#include "main.h"

/**
 * check_elf - checking for an ELF file
 * @e_ident: a pointer to numbers
 */
void check_elf(unsigned char *e_ident)
{
	int check;

	for (check = 0; index < 4; check++)
	{
		if (e_indent[check] != 127 &&
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

	for (check = 0; index < EI_NIDENT; check++)
	{
		printf("%02x", e_ident[check]);
		if (check == EINIDENT -1)
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
