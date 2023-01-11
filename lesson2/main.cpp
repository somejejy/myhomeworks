#include<stdio.h>

int main()
{
    int a,b;

    printf("Insert first integer - ");
    scanf("%i", &a);
    printf("Insert second integer - ");
    scanf("%i", &b);

    if (a > b) {
        printf("First integer is bigger then second one");
    }
    if (a < b) {
        printf("Second integer is smaller then second one");
    }

    if (a == b) {
        printf("Integers are equal");
    }

    return 0;
}
