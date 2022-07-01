// I
// IN
// IND
// INDI
// INDIA

#include <stdio.h>
#include <string.h>

int main()
{
     char s[] = "INDIA";
     int len = strlen(s);
     for (int i = 0; i < len; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               printf("%c",s[j]);
          }
          printf("\n");
     }
     
     return 0;
}

// #include<stdio.h> 
// void main()
// {
//     char s[]="INDIA";
//     int i,j;
//     for(i=0;s[i];i++)
//     {
//         for(j=0;j<=i;j++)
//         printf("%c",s[j]);
//         printf("\n");
//     }
// }