//w.a.p. to accept 10 int from user and display min and max from it...

#include<stdio.h>
#include<conio.h>

int main()

{
int a[10],i,max,min;


for(i=0;i<=9;i++)
	{
	printf("%d) : ",i+1);
	scanf("%d",&a[i]);
	}

min=a[0],max=a[0];

for(i=0;i<=9;i++)
	{
	if(a[i]<min)
		{
		min=a[i];
		}
	if(a[i]>max)
		{
		max=a[i];
		}
	}

printf("max = %d , min = %d",max,min);

getch();
return 0;
}
