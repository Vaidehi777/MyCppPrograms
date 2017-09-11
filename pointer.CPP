#include<iostream.h>
#include<conio.h>

class Media
{
protected :
	char title[10];
	int price;
public :
	void get()
	{
		cin>>title>>price;
	}
	virtual void put()
	{
	}
};

class Book : public Media
{
	int page;
public :
	void getb()
	{
		get();
		cin>>page;
	}
	void put()
	{
		cout<<title<<price<<page;
	}
};

class CD : public Media
{
	int time;
public :
	void getc()
	{
		get();
		cin>>time;
	}
	void put()
	{
		cout<<title<<price<<time;
	}
};

int main()
{
	clrscr();

	Book b;
	CD c;
	Media *ptr;

	ptr=&b;
	b.getb();
	ptr->put();

	ptr=&c;
	c.getc();
	ptr->put();

	getch();
	return 0;
}