/* WAP to print following pattern
*
**
***
****
*****
DATE : 26/01/2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("enter a number till you are draw patttern:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<i;j++)
				printf("*");
			printf("\n");
		}
	getch();
}