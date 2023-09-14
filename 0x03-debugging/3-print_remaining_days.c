#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        if (month > 2)
        {
            day += 1;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);
    }
}
