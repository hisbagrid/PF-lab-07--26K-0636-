
#include <stdio.h>
int main()
{ // pattern 1
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // pattern 2
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    // pattern 3
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    

// pattern 4
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // pattern 5
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    // pattern 6
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
   
    return 0;
}