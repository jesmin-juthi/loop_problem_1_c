#include <stdio.h>

int main()
{
   int n, i, sum = 0;
   printf("Enter a natural number: ");
   scanf("%d", &n);

    printf("The first %d natural number is: ", n);
   for(i = 1; i <= n; i++)

   {
       printf("%d ", i);
       sum = sum + i;
   }
   printf("\nThe sum of natural number upto %d terms: %d",n, sum);


    return 0;
}


