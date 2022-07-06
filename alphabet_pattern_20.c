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
          for (int j = 0; j <= n-i; j++)
          {
               printf("%c",c+n-i);
               c++;
          }
          printf("\n");
     }
     return 0;
}