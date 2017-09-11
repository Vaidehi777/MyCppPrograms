#include<iostream.h>
#include<conio.h>


class Student
	{
	char name[10];
	char dept[10];
	int mark[3];

	public :
		void getdata();
		void putdata();
		float avg();
	};

void Student :: getdata()
	{
	cout<<"name : ";
	cin>>name;
	cout<<"dept : ";
	cin>>dept;

	int j;
	for(j=0;j<=2;j++)
		{
		cout<<"mark "<<j+1<<") : ";
		cin>>mark[j];
		}
	}

float Student :: avg()
	{
	int i,sum=0,avg;
	for(i=0;i<=2;i++)
		{
		sum=sum+mark[i];
		}
	avg=sum/3;
	return avg;
	}

void Student :: putdata()
	{
	float ans;
	ans=avg();
	cout<<"result : "<<ans<<"%\n\n";
	}

int main()
{
Student s[5];
clrscr();

int i;
for(i=0;i<=4;i++)
	{
	s[i].getdata();
	s[i].avg();
	s[i].putdata();
	}

getch();
return 0;
}