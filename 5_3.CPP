#include<iostream.h>
#include<conio.h>

class Complex
	{
		float real,img;
	public :
		void getdata();
		void putdata();
		Complex add(Complex,Complex);
		Complex()
			{
			real  = 0;
			img = 0;
			}
	};

void Complex :: getdata()
	{
	cout<<"real : ";
	cin>>real;
	cout<<"img : ";
	cin>>img;
	}

void Complex :: putdata()
	{
	cout<<"\n\nans : "<<real<<" + i"<<img;
	}

Complex Complex :: add(Complex a,Complex b)
	{
	Complex temp;
	temp.real = a.real + b.real;
	temp.img = a.img + b.img;
	return temp;
	}

int main()
	{
	Complex c1,c2,c3,c4;
	clrscr();

	c1.getdata();
	c2.getdata();
	c3 = c1.add(c1,c2);
	c3.putdata();
	c4.putdata();

	getch();
	return 0;
	}


