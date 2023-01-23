#include<stdio.h>

int main()
{
    int a;
    
    while (a != 7)
    {
        scanf("%i\n", &a);
        if (a < 10)
        {
            
            printf("Smaller than 10");
            if (a < 7)
            {
                printf("Smaller than 7");
            }

        }
        
        if (a > 10)
        {
            
            printf("Bigger than 10");
            if (a > 7)
            {
                printf("Bigger than 7");
            }

        }

        if (a%2 == 0)
        {
            printf("Divisible by 2");
        }

        if (a%3 == 0)
        {
            printf("Divisible by 3");
        }
    }
}
