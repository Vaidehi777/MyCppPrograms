//w.a.p to print fibonacci series up to n terms...

#include<stdio.h>
#include<conio.h>

void main()

{
int n,i,save,sum=0,a=0,b=1;
clrscr();

printf("enter n : ");
scanf("%d",&n);

for(i=0;i<n;i++)
	{
	sum=sum+a;
	printf("%d,",sum);
	save=b;
	b=sum;
	a=save;
	}
printf("...");
getch();
}


