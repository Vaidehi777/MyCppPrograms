#include<iostream.h>
#include<conio.h>

template < class T1 , class T2>

class Greater
{
	T1 a;
	T2 b;
public :
	void get();
	void put();
	void greater();
};

template < class T1 , class T2 >
void Greater < class T1 , class T2 >:: get()
	{
		cin>>a>>b;
	}

template < class T1 , class T2 >
void Greater < class T1 , class T2 >:: put()
{
	greater();
}

template < class T1 ,class T2 >
void Greater < class T1 , class T2 >:: greater()
{
	if(a>b)
	{
		cout<<a;
	}
	else
	{
		cout<<b;
	}
}

int main()
{
	clrscr();

	Greater <char,int> obj;

	obj.get();
	obj.put();

	getch();
	return 0;
}