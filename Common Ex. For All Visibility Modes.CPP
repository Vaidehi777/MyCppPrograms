#include<iostream.h>
#include<conio.h>

class Base
{
protected :
	int b;
public :
	void getb()
	{
		cin>>b;
	}
	void putb()
	{
		cout<<b;
	}
};

class D1 : public Base
{
};

class D2 : protected Base
{
public :
	void get()
	{
		getb();
		putb();
	}
};

class D3 : private Base
{
public :
	void get()
	{
		getb();
		putb();
	}
};

int main()
{
	clrscr();

	D1 a;
	D2 b;
	D3 c;

	a.getb();
	a.putb();

	b.get();
	c.get();

	getch();
	return 0;
}