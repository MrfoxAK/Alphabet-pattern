//     A
//    BAB
//   CBABC
//  DCBABCD
// EDCBABCDE

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
          for (int k = 1; k <= n-i; k++)
          {
               printf(" ");
          }
          for (int j = i; j>=1 ; j--)
          {
               printf("%c",c+j-1);
          }
          for (int j = 2; j <= i ; j++)
          {
               printf("%c",c+j-1);
          }
          printf("\n");
     }
     return 0;
}