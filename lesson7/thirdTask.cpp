#include<stdio.h>

int main()
{
    int i=5;
    int sum=0;
    while (i <= 15) {
        sum = sum + i;
        i++;
    }
    printf("Sum is %i", sum);
}
