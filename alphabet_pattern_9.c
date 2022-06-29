// EDCBA
// EDCB
// EDC
// ED
// E

#include <stdio.h>
int main()
{
     int n;
     char c;
     printf("Enter N : ");
     scanf("%d",&n);
     for (int i = 1; i <=n ; i++)
     {
          c='A';
          for (int j = n; j>=i ; j--)
          {
               printf("%c",c+j-1);
          }
          printf("\n");
     }
     return 0;
}