#include <stdio.h>
 
long fact(int);
 
int main()
{
    int i, rows, a;
    printf("Enter the number of rows \n");
    scanf("%d",&rows);
    for (i = 0; i < rows; i++)
    {
         for (a = 0 ; a <= i; a++)
         printf("%ld ",factorial(i)/(factorial(a)*factorial(i-a)));
         printf("\n");
    }
 
    return 0;
}
long fact(int n)
{
   int a;
   long result = 1;
   for (a = 1; a <= rows; a++)
   result = result*a;
   return result;
}
