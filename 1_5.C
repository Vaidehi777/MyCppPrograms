//w.a.p to accept 10 int from user and sort them in asc order...

#include<stdio.h>
#include<conio.h>

void main()

{
int a[10],i,j,k,save;
clrscr();

for(i=0;i<=9;i++)
	{
	printf("%d) : ",i+1);
	scanf("%d",&a[i]);
	}

for(j=0;j<=9;j++)
	{
	for(k=0;k<=9;k++)
		{
		if(a[k]>a[j])
			{
			save=a[j];
			a[j]=a[k];
			a[k]=save;
			}
		}
	}

for(i=0;i<=9;i++)
	{
	printf("%d,",a[i]);
	}

getch();
}
