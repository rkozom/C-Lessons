// Программа определяет следующую за введенной пользователем дату

#include <stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
} Date;

Date CalcTomorrow(Date);

int main()
{
    Date today, tomorrow;

    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d%d%d", &today.day, &today.month, &today.year);

    tomorrow = CalcTomorrow(today);

    printf("Tomorrow's date is %.2d.%.2d.%d", tomorrow.day, tomorrow.month, tomorrow.year);

}

Date CalcTomorrow(Date today)
{
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};
    
    Date tomorrow;

    if (today.day != daysPerMonth[today.month-1]) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}