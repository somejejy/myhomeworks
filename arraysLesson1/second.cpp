#include<stdio.h>

int main()
{
    int n;
    int mas[100];
    printf("Выберете кол-во элементов в массиве: ");
    scanf("%i", &n);

    for (int i=0; i < n; i++) {
        int user_input;
        scanf("%i", &user_input);

        mas[i] = user_input;
    }

    for (int i=0; i < n; i++) {
        printf("%4i", mas[i]);
    }
}
