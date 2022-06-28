#include <stdio.h>
int main()
{
     int n;
     char c='A';
     printf("Enter no.of rows : ");
     scanf("%d",&n);
     for (int i = n; i >=1; i--)
     {
          c='E';
          for (int j = n; j >= i; j--)
          {
               printf("%c",c);
               c--;
          }
          printf("\n");
     }
     return 0;
}