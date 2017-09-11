#include<iostream.h>
#include<conio.h>

class Student
{
protected :
	int rollno;
	char name[10];
public :
	void get()
	{
		cin>>rollno>>name;
	}
	void put()
	{
		cout<<rollno<<name;
	}
};

class Test
{
	Student s;
	int m1,m2,m3;
public :
	void getmark()
	{
		s.get();
		cin>>m1>>m2>>m3;
	}
	void result()
	{
		s.put();
		cout<<(m1+m2+m3)/3;
	}
};

int main()
{
	clrscr();

	Test obj;
	obj.getmark();
	obj.result();

	getch();
	return 0;
}