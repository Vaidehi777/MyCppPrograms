#include<iostream.h>
#include<conio.h>

class Complex
	{
		float real,img;
	public :
		void getdata();
		void putdata();
		friend Complex add(Complex,Complex);
	      /*	Complex()
			{
			real  = 0;
			img = 0;
			}           */
		Complex(float a = 0,float b = 0)
			{
			real=a;
			img=b;
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

Complex add(Complex a,Complex b)
	{
	Complex temp;
	temp.real = a.real + b.real;
	temp.img = a.img + b.img;
	return temp;
	}

int main()
	{
	float m,n;
	clrscr();

	cout<<"enter default values for every complex no.s :-";
	cout<<"\nreal : ";
	cin>>m;
	cout<<"img : ";
	cin>>n;

	Complex c1(m,n),c2,c3(7,9);

/*	c1.getdata();
	c2.getdata();
	c3 = add(c1,c2);     */
	c1.putdata();
	c2.putdata();
	c3.putdata();

	getch();
	return 0;
	}


