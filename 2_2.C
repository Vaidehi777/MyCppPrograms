//w.a.p to accept x and y from user and displays x rest to y using function power()...

#include<stdio.h>
#include<conio.h>

int power(int,int);

void main()

{
int x,y,ans;
clrscr();

printf("x : ");
scanf("%d",&x);

printf("y : ");
scanf("%d",&y);

ans = power(x,y);

printf("%d rest to %d = %d.",x,y,ans);

getch();
}

int power(int m,int n)
{
int mul=1,i;
for(i=1;i<=n;i++)
	{
	mul=mul*m;
	}
return mul;
}
