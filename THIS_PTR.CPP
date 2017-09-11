#include<iostream.h>
#include<conio.h>

class Sample
{
	int no;
public :
	void get()
	{
		cin>>no;
	}
	Sample max ( Sample x )
	{
		if(no>x.no)
		{
			return *this;
		}
		else
		{
			return x;
		}
	}
	void put()
	{
		cout<<no;
	}
};

int main()
{
	clrscr();

	Sample obj1,obj2,result;

	obj1.get();
	obj2.get();

	result = obj1.max(obj2);
	result.put();

	getch();
	return 0;
}
