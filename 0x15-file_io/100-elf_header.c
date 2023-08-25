  #include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_header(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Unable to open file '%s'\n", filename);
exit(98);
}

Elf32_Ehdr elf_header;
if (read(fd, &elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
{
fprintf(stderr, "Error: Unable to read ELF header from '%s'\n", filename);
close(fd);
exit(98);
}

printf("ELF Header:\n  Magic:");
for (int i = 0; i < EI_NIDENT; i++)
{
printf(" %02x", elf_header.e_ident[i]);
}
printf("\n  Class:");
switch (elf_header.e_ident[EI_CLASS])
{
case ELFCLASS32:
printf(" ELF32\n");
break;
case ELFCLASS64:
printf(" ELF64\n");
break;
default:
printf(" <unknown>\n");
break;
}
printf("  Data:");
switch (elf_header.e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf(" 2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf(" 2's complement, big endian\n");
break;
default:
printf(" <unknown>\n");
break;
}
printf("  Version: %d\n  OS/ABI: %d\n  ABI Version: %d\n",
elf_header.e_ident[EI_VERSION], elf_header.e_ident[EI_OSABI],
elf_header.e_ident[EI_ABIVERSION]);
printf("  Type: %d\n  Entry point address: 0x%x\n",
elf_header.e_type, elf_header.e_entry);
close(fd);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

display_elf_header(argv[1]);
return (0);
}
