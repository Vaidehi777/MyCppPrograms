//to print student result using structure...

#include<stdio.h>
#include<conio.h>

struct student
	{
	int no;
	char name[10];
	int marks[3];
	}s;

void main()
{
int i,avg,sum=0;
clrscr();

printf("enter name : ");
scanf("%s",s.name);

printf("enter id : ");
scanf("%d",&s.no);

for(i=0;i<=2;i++)
	{
	printf("%d) : ",i+1);
	scanf("%d",&s.marks[i]);
	}

printf("result : %s (%d)",s.name,s.no);
for(i=0;i<=2;i++)
	{
	printf("\n\nmarks in %d) : %d",i+1,s.marks[i]);
	sum=sum+s.marks[i];
	}
avg=sum/3;
printf("\n\n\nover all result: %d%",avg);

getch();
}
