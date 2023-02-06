#include<stdio.h>

int main()
{
    int mas[7];

    for (int i=0; i < 7; i++) {
        int user_input;
        scanf("%i", &user_input);

        mas[i] = user_input;
    }

    for (int i=0; i < 7; i++) {
        printf("Ячейка: %i, значение: %i ", i, mas[i]);
    }
}
