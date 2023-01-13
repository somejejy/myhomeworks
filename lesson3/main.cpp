#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("Insert first login - ");
    scanf("%i", &a);
    printf("Insert first password - ");
    scanf("%i", &b);

    printf("Insert second login - ");
    scanf("%i", &c);
    printf("Insert second password - ");
    scanf("%i", &d);

    if ((a == 100) && (b == 150) || ((c == 110) && (d == 140))) {
        printf("OK");
    }
    else {
        printf("ERROR");
    }

    return 0;
}
