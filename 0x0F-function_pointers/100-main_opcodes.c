#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num_bytes;
    int i;  // Move the variable declaration here

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    unsigned char *main_ptr = (unsigned char *)&main;
    for (i = 0; i < num_bytes; i++)  // Use the variable here
    {
        printf("%02x", main_ptr[i]);
        if (i != num_bytes - 1)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}
