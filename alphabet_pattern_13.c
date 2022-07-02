// 1A2B3C4D5E
// 1A2B3C4D
// 1A2B3C
// 1A2B
// 1A


#include <stdio.h>
int main()
{
     int n;
     char c;
     printf("Enter N : ");
     scanf("%d",&n);
     for (int i = 0; i < n ; i++)
     {
          c='A';
          for (int j = 1; j<= n-i ; j++)
          {
               printf("%d%c",j,c+j-1);
          }
          printf("\n");
     }
     return 0;
}