#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>

void print_error(char *message);
void print_elf_header(Elf64_Ehdr *header);

int main(int argc, char *argv[])
{
    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Error: Cannot open file");

    Elf64_Ehdr elf_header;
    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
        print_error("Error: Cannot read ELF header");

    close(fd);
    print_elf_header(&elf_header);

    return (0);
}

void print_error(char *message)
{
    ssize_t len = 0;
    while (message[len])
        len++;
    write(STDERR_FILENO, message, len);
    exit(98);
}

void print_elf_header(Elf64_Ehdr *header)
{
    char magic[16];
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header->e_ident[i]);

    printf("\nClass:                             ");
    switch (header->e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %02x>\n", header->e_ident[EI_CLASS]);
    }

    printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              %d\n", header->e_type);
    printf("Entry point address:               0x%lx\n", header->e_entry);
}
