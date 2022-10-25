#include <stdio.h>

int main()
{
    int n, i, sqr;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Input number of terms: %d \n", n);

    for(i = 1; i <= n; i++)
    {
        sqr = i * i;
        printf("Number is: %d and Square of the %d is: %d \n", i, i, sqr);
    }


    return 0;
}
