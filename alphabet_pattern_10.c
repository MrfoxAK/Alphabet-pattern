#include <stdio.h>
int main()
{
     int n;
     char c;
     printf("Enter N : ");
     scanf("%d",&n);
     for (int i = n; i >= 1; i--)
     {
          c='A';
          for (int j = i; j>=1 ; j--)
          {
               printf("%c",c+j-1);
          }
          printf("\n");
     }
     return 0;
}