//w.a.p to concate two strings...

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char a[20],b[10],i,j,m=-1,k=1,l1,l2;
clrscr();

printf("enter string 1 : ");
scanf("%s",a);

printf("enter string 2 : ");
scanf("%s",b);

l1=strlen(a);l1++;
l2=strlen(b);

for(i=l1;i<=l2;i++)
	{
	m++,k++;
	for(j=m;j<=k;j++)
		{
		a[i]=b[j];
		}
	}

puts(a);

getch();
}