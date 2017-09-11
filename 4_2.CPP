#include<iostream.h>
#include<conio.h>

struct student
	{
	char name[10];
	char dept[10];
	int mark[3];
	}s[5];

void getdata();
void putdata();
float avg(int,int,int);

int main()
{
clrscr();

 getdata();
 putdata();

getch();
return 0;
}

void getdata()
{
int i,j;
for(i=0;i<=4;i++)
	{
	cout<<"\n\nenter data for student "<<i+1<<" :- ";
	cout<<"\nname : ";
	cin>>s[i].name;
	cout<<"dept : ";
	cin>>s[i].dept;
	for(j=0;j<=2;j++)
		{
		cout<<"mark in "<<j+1<<") : ";
		cin>>s[i].mark[j];
		}
	}
}

void putdata()
	{
	float ans[5];
	int i;
	for(i=0;i<=4;i++)
		{
		ans[i]=avg(s[i].mark[0],s[i].mark[1],s[i].mark[2]);
		cout<<"\n\nstudent "<<i+1<<" :-\n"<<"avg : "<<ans[i];
		}
	}

float avg(int a,int b,int c)
	{
	return (a+b+c)/3;
	}


