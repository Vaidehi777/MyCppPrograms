#include<stdio.h>
#include<conio.h>

struct emp
	{
	int id;
	char name[10];
	int sal;
	}e[5];

void main()
{
int i;
clrscr();

for(i=0;i<=4;i++)
	{
	printf("info for employee %d) : ",i+1);
	printf("\nname : ");
	scanf("%s",e[i].name);
	printf("id : ");
	scanf("%d",&e[i].id);
	printf("sal : ");
	scanf("%d",&e[i].sal);
	}

printf("\n\n\n			result			");
printf("\n---------------------------------------------------");
printf("\n	id		name		salary");
printf("\n\n");
for(i=0;i<=4;i++)
	{
	printf("\n	%d		%s		%d",e[i].id,e[i].name,e[i].sal);
	}
printf("\n-----------------------------------------------------");

getch();
}

