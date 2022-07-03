#include <stdio.h>

int main()
{
     int n;
     char c;
     printf("Enter N: ");
     scanf("%d",&n);
     for (int i = 0; i < n; i++)
     {
          c='A';
          for (int j = 1; j <= n-i; j++)
          {
               printf("%c",c+j-1);
          }
          for (int j = 1; j <= 2*i; j++)
          {
               printf(" ");
          }
          for (int j = n-i; j >=1; j--)
          {
               printf("%c",c+j-1);
          }
          printf("\n");
     }
     return 0;
}




// #include <stdio.h>
// int main()
// {
//      int n;
//      printf("Enter N: ");
//      scanf("%d",&n);
//      for (int i = 0; i < n; i++)
//      {
//           for (int j = 1; j <= 2*n-1; j++)
//           {
//                if (j <= n-i || j >= n+i)
//                {
//                     printf("*");
//                }
//                else{
//                     printf(" ");
//                }
//           }
//           printf("\n");
//      }
//      return 0;
// }