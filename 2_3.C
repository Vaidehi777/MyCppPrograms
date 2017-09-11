//w.a.p that accepts a array from user and display the sum of its elements with function sum()...

#include<stdio.h>
#include<conio.h>

int sum(int *);

void main()
{
int a[10],i,ans;
clrscr();

for(i=0;i<=9;i++)
	{
	printf("%d) : ",i+1);
	scanf("%d",&a[i]);
	}

ans=sum(&a[0]);

printf("sum of all entered elements : %d",ans);

getch();
}

int sum(int *a)
{
int sum=0,i;

for(i=0;i<=9;i++)
	{
	sum=sum+a[i];
	}

return sum;
}