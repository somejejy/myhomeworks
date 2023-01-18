#include<stdio.h>

int main()
{
    int day, month, year;

    printf("Введите день вашего рождения - ");
    scanf("%i", &day);
    printf("Введите номер месяца вашего рождения - ");
    scanf("%i", &month);
    printf("Введите год вашего рождения - ");
    scanf("%i", &year);

    bool isLeapYear = !!year%4;

    if (isLeapYear) {
        printf("Вы были рождены в високосный год");
    }

    int animalOfTheYear = year%12;

    switch (animalOfTheYear) {
        case 4:
        {
            printf("Вы родились в год крысы");
            break;
        }
        case 5:
        {
            printf("Вы родились в год быка");
            break;
        }
        case 6:
        {
            printf("Вы родилист в год тигра");
            break;
        }
        case 7:
        {
            printf("Вы родилист в год кролика");
            break;
        }
        case 8:
        {
            printf("Вы родилист в год дракона");
            break;
        }
        case 9:
        {
            printf("Вы родилист в год змея");
            break;
        }
        case 10:
        {
            printf("Вы родилист в год лошадь");
            break;
        }
        case 11:
        {
            printf("Вы родилист в год козы");
            break;
        }
        case 12:
        {
            printf("Вы родилист в год обезьяны");
            break;
        }
        case 13:
        {
            printf("Вы родилист в год петуха");
            break;
        }
        case 14:
        {
            printf("Вы родилист в год собаки");
            break;
        }
        case 15:
        {
            printf("Вы родилист в год свиньи");
            break;
        }
    }

    if ((month == 12 || month == 1) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Казирог");
        return 0;
    }
    if ((month == 1 || month == 2) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Водолей");
        return 0;
    }
    if ((month == 2 || month == 3) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Рыбы");
        return 0;
    }
    if ((month == 3 || month == 4) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Овен");
        return 0;
    }
    if ((month == 4 || month == 5) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Телец");
        return 0;
    }
    if ((month == 5 || month == 6) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Близнецы");
        return 0;
    }
    if ((month == 6 || month == 7) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Рак");
        return 0;
    }
    if ((month == 7 || month == 8) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Лев");
        return 0;
    }
    if ((month == 8 || month == 9) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Дева");
        return 0;
    }
    if ((month == 9 || month == 10) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Весы");
        return 0;
    }
    if ((month == 10 || month == 11) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Змееносец");
        return 0;
    }
    if ((month == 11 || month == 12) && (day > 19 || day < 22)) {
        printf("Ваш знак зодиака - Стрелец");
        return 0;
    }
}
