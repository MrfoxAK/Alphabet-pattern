#include <stdio.h>
int main()
{
     int n;
     char c='A';
     printf("Enter no.of rows : ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
          // c='A';
          for (int j = i; j >= 1; j--)
          {
               printf("%c",'A'+j-1);
               // c++;
          }
          printf("\n");
     }
     return 0;
}