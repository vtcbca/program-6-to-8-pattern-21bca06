/* Write a program to print following pattern
	   1
	 2 1 2
       3 2 1 2 3
Date:25-Jan-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,n;
	clrscr();
	printf("\n Enter the number of row you went to print:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		for(l=2;l<=i;l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	getch();
}