#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        dprintf(2, "Usage: %s elf_filename\n", argv[0]);
        exit(1);
    }

    return 0;
}
