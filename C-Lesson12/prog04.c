// Программа демонстрирует использование структуры
#include <stdio.h>

typedef struct date {
    int month;
    int day;
    int year;
} Date;

int main()
{
    Date today;

    today.year = 2019;
    today.month = 1;
    today.day = 11;

    printf("Today's date is %.2d.%.2d.%d", today.day, today.month, today.year);

    return 0;
}