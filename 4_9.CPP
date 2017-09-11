#include<iostream.h>
#include<conio.h>

class Complex
	{
	int real,img;

	public :
		void getdata();
		void putdata();
		void sum (Complex , Complex);
	};

void Complex :: getdata()
	{
	cout<<"\n\nreal part : ";
	cin>>real;

	cout<<"img part : ";
	cin>>img;
	}

void Complex :: putdata()
	{
	cout<<"\n\nresult : \n\n";
	cout<<real<<" + i"<<img;
	}

void Complex :: sum (Complex x, Complex y)
	{
	real = x.real + y.real;
	img  = x.img  + y.img ;
	}

int main()
{
Complex a,b,c;
clrscr();

cout<<"enter data for object a :-";
a.getdata();

cout<<"\n\nenter data for object b :-";
b.getdata();

c.sum(a,b);
c.putdata();

getch();
return 0;
}

