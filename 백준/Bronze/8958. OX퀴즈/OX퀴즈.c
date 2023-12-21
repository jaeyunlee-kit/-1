#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int a, count, sum, is;
   scanf("%d", &a);
   getchar();
   char data[80];
    
   for (int i = 0; i < a; i++)
   {
       count = 1;
       sum = 0;
       scanf("%s", data);
       
       for(int is = 0; data[is] != '\0'; is++)
       {
         if (data[is] == 'O')
         {
            sum += count;
            count++;
         }

         else if (*(data + is) == 'X')
         {
            count = 1;
         }
      }
       
      printf("%d\n", sum);
   }
}