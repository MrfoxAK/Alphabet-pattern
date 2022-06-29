// E
// DD
// CCC
// BBBB
// AAAAA

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
          for (int j = n; j>=i ; j--)
          {
               printf("%c",c+i-1);
          }
          printf("\n");
     }
     return 0;
}