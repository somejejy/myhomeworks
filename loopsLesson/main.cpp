#include<stdio.h>

int main()
{
    int n;

    printf("Выберете кол-во элементов для ввода: 2, 4, 7: ");
    scanf("%i", &n);

    int result = 0;
    int min = 0;
    int max = 0;

    for (int i=0; i < n; i++) {
        int user_input;
        scanf("%i", &user_input);

        if (i == 0) {
            min = user_input;
            max = user_input;
        }

        if (user_input < min) {
            min = user_input;
        }

        if (user_input > max) {
            max = user_input;
        }

        result = user_input + result;
    }


    printf("Сумма введенных элементов: %i \n", result);
    printf("Среднее арифметическое: %i \n", result / n);
    printf("Минимальное: %i, Максимальное: %i \n", min, max);
}
