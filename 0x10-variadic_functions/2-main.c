#include "variadic_functions.h"
#include <stddef.h> /* Include <stddef.h> for NULL */

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(NULL, 3, "Hello", NULL, "World");
    return (0);
}
