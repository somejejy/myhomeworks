#include<stdio.h>

int main()
{
    int n;

    printf("Выберете кол-во элементов для ввода: 2, 4, 7: ");
    scanf("%i", &n);

    int result = 0;
    int *inputs = new int[n];

    for (int i=0; i < n; i++) {
        int user_input;
        scanf("%i", &user_input);
        inputs[i] = user_input;

        result = user_input + result;
    }

    int min = inputs[0];
    int max = 0;
    
    for (int i=0; i < n; i++) {
        int currentElement = inputs[i];

        if (currentElement < min) {
            min = currentElement;
        }

        if (currentElement > max) {
            max = currentElement;
        }
    }

    printf("Сумма введенных элементов: %i \n", result);
    printf("Среднее арифметическое: %i \n", result / n);
    printf("Минимальное: %i, Максимальное: %i \n", min, max);
}
