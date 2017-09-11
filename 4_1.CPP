#include<stdio.h>
#include<conio.h>
#include<iostream.h>

struct student
	{
	char name[10];
	char dept[10];
	int mark[3];
	};

int main()
{
struct student s[5];
clrscr();

int i,j,sum=0;
float prcntg;
for(i=0;i<=4;i++)
	{
	cout<<"name : ";
	cin>>s[i].name;

	cout<<"dept : ";
	cin>>s[i].dept;

	for(j=0;j<=2;j++)
		{
		cout<<"mark "<<j+1<<") : ";
		cin>>s[i].mark[j];
		sum=sum+s[i].mark[j];
		}

	prcntg=sum/3;
	cout<<"result : "<<prcntg<<" %\n\n";
	sum=0;
	}

getch();
return 0;
}