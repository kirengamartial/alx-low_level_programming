#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>
#include "main.h" // Include the main.h header

int main(int argc, char *argv[])
{
    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Error: Cannot open file");

    Elf64_Ehdr *elf_header = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));
    if (elf_header == NULL)
        print_error("Error: Memory allocation failed");

    if (read(fd, elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
        print_error("Error: Cannot read ELF header");

    close(fd);
    print_elf_header(elf_header);
    free(elf_header);

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
