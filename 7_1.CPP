#include<iostream.h>
#include<conio.h>

class Space
{
	int x,y,z;
public :
	void getdata();
	void putdata();
	void operator -();
};

void Space :: getdata()
{
	cout<<"x : ";
	cin>>x;
	cout<<"y : ";
	cin>>y;
	cout<<"z : ";
	cin>>z;
}

void Space :: putdata()
{
	cout<<"( "<<x<<" , "<<y<<" , "<<z<<" )\n";
}

void Space :: operator -()
{
	x = -x;
	y = -y;
	z = -z;
}

int main()
{
	Space s;
	clrscr();

	s.getdata();
	cout<<"s : ";
	s.putdata();

	-s;
	cout<<"-s : ";
	s.putdata();

	getch();
	return 0;
}