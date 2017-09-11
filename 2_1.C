//w.a.p to check wither string is palindrom or not...

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char a[10],b[10],i,j=0,l;
clrscr();

printf("enter string : ");
scanf("%s",a);

l=strlen(a);

for(i=l-1;i>=0;i--)
	{

		b[j]=a[i];
	     j++;
	}
	b[j]='\0';

printf("%s",b);

getch();
}