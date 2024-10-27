#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the numbers with a space between them: ");
    scanf("%d %d", &a, &b);

    printf("The sum of %d and %d is %d.", a, b, a+b);

    return 0;
}