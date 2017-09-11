//w.a.p to add distance foot+inch and convert in inch...

#include<stdio.h>
#include<conio.h>

struct distance
	{
	int foot;
	int inch;
	}d;

void main()
{
clrscr();

printf("distance in foot : ");
scanf("%d",&d.foot);

printf("distance in inch : ");
scanf("%d",&d.inch);

d.foot=d.foot*12;

printf("total distance : %d inch",d.foot+d.inch);

getch();
}