//w.a.p to to sort an array using function sort...

#include<stdio.h>
#include<conio.h>

sort(int *);

void main()
{
int i,a[10],p,k;
clrscr();

for(i=0;i<=9;i++)
	{
	printf("%d) : ",i+1);
	scanf("%d",&a[i]);
	}

p=sort(&a[0]);
getch();
}

sort(int *m)
{
int i,j,save;
clrscr();

for(i=0;i<=9;i++)
	{
	for(j=0;j<=9;j++)
		{
		if(m[i]<m[j])
			{
			save=m[i];
			m[i]=m[j];
			m[j]=save;
			}
		}
	}

for(i=0;i<=9;i++)
	{
	printf("%d,",m[i]);
	}
}


