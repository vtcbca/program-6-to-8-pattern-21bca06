/*write a program to print following pattern:

	  1
       2  1  2
  3  2  1  2   3
Date:29-dec-2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,space,k;
    clrscr();
    for(i=1;i<=3;i++)
    {
	for(space=1;space<=3-i;space++)
	{
	printf(" ");
	}
    for(k=i;k>=1;k--)
	{
	printf("%d ", k);
	}
    for(j=2;j<=i;j++)
	{
	printf("%d ", j);
	}
     printf("\n");
     }
    getch();
}