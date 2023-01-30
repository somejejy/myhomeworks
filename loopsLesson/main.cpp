#include<stdio.h>

int main()
{
    int n;

    printf("Выберете кол-во элементов для ввода: 2, 4, 7: ");
    scanf("%i", &n);

    int result = 0;
    int inputs[n];

    for (int i=0; i < n; i++) {
        int user_input;
        inputs[i] = user_input;
        scanf("%i", &user_input);

        result = user_input + result;
    }

    int min,max = 0;
    
    for (int i: inputs) {
        if (i < min) {
            min = i;
        }

        if (i > min) {
            max = i;
        }
    }

    printf("Сумма введенных элементов: %i \n", result);
    printf("Среднее арифметическое: %i \n", result / n);
    printf("Минимальное: %i, Максимальное: %i \n", min, max);
}
