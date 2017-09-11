#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class Employee
	{
	char name[10];
	char dept[10];
	int age;

	public :
		void getrecord();
		void putrecord();
	};

void Employee :: getrecord()
	{
	cout<<"name : ";
	cin>>name;
	cout<<"dept : ";
	cin>>dept;
	cout<<"age : ";
	cin>>age;
	}

void Employee :: putrecord()
	{
	static int i=1;
	cout<<"   "<<i<<"	"<<name<<"       "<<dept<<"       "<<age<<"   \n\n";
	i++;
	}

int main()
{
Employee e[5];
clrscr();

int i;
for(i=0;i<=4;i++)
	{
	cout<<"Employee "<<i+1<<" :-\n";
	e[i].getrecord();
	cout<<"\n";
	}

cout<<"-----------------------------------------------\n\n";
cout<<"   emp_no	name       dept       age   \n\n";

for(i=0;i<=4;i++)
	{
	e[i].putrecord();
	}

cout<<"-----------------------------------------------";

getch();
return 0;
}