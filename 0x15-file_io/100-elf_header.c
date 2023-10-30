#include <elf.h>
#include "main.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    return (0);
}
