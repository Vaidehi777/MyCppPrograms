#include<iostream.h>
#include<conio.h>

class Student
{
	int no;
	char name[10];
	char dept[10];
	int mark[3];
	float pr;
public :
	void get();
	void sort();
	void put();
}s[5];

void Student :: get()
{
	cout<<"name : ";
	cin>>name;
	cout<<"no : ";
	cin>>no;
	cout<<"dept : ";
	cin>>dept;
	cout<<"mark : \n";
	int sum = 0;
	for(int i=0;i<3;i++)
	{
		cout<<i+1<<") : ";
		cin>>mark[i];
		sum = sum + mark[i];
	}
	pr = sum/3;
	cout<<"\n";
}

void Student :: sort()
{
	Student temp;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(s[i].pr < s[j].pr)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		s[i].put();
		cout<<"\n";
	}
}

void Student :: put()
{
	cout<<"\nname : "<<name;
	cout<<"\nno : "<<no;
	cout<<"\ndept : "<<dept;
	cout<<"\npr : "<<pr;
}


int main()
{
	clrscr();

	for(int i=0;i<5;i++)
	{
		s[i].get();
	}
	s[0].sort();

	getch();
	return 0;
}




