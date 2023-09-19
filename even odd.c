#include <stdio.h>
int main()
{
    int num;
    printf("enter your number");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("\n%d number is even ", num);
    }
    else
    {
        printf("\n%d number is odd ", num);
    }
}