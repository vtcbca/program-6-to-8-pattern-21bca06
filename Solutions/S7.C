/* WAP to print following pattern
* * * * *
  * * *
    *
    date: 26/01/2022 */
#include<stdio.h>
#include<conio.h>
void main() 
{
   int rows, i, j, sp; //Sp is for space 
   clrscr();
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) 
    {
      for (sp = 0; sp < rows - i; ++sp)
         printf("  ");
      for (j = i; j <= 2*i-1; ++j)
         printf("* "); 
        i--;
      printf("\n");
   }
   getch();
}
