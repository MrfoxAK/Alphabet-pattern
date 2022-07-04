#include <stdio.h>
int main()
{
     int n;
     char c;
     printf("Enter N: ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
          c='A';
          for (int j = 1; j <= 2*i-1; j++)
          {
               printf("%c",c);
               c++;
          }
          printf("\n");
     }
     
     return 0;
}