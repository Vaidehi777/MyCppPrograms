#include<iostream.h>
#include<conio.h>
#include<process.h>

class Triangle
{
protected :
	int height,base;
public :
	void area();
};

void Triangle :: area()
{
	cout<<"\narea : "<<(0.5) * (base) * (height);
}

class Isosceles : public Triangle
{
protected :
	int side;
public :
	void getdata();
	void perimeter();
};

void Isosceles :: getdata()
{
	cout<<"base : ";
	cin>>base;
	cout<<"height : ";
	cin>>height;
	cout<<"side : ";
	cin>>side;
}

void Isosceles :: perimeter()
{
	cout<<"\nperimeter : "<< (2 * side) + (base);
	cout<<"\n\n";
}

class Equilateral : public Triangle
{
public :
	void getdata();
	void perimeter();
};

void Equilateral :: getdata()
{
	cout<<"base : ";
	cin>>base;
	cout<<"height : ";
	cin>>height;
}

void Equilateral :: perimeter()
{
	cout<<"\nperimeter : "<< (3 * base);
	cout<<"\n\n";
}

int main()
{
	int choice;
	clrscr();

	again : cout<<"1) isosceles triangle \n";
		cout<<"2) equilateral triangle \n";
		cout<<"3) exit";
		cout<<"\nenter your choice : ";
		cin>>choice;

	switch(choice)
	{
		case 1 :
			Isosceles iso;

			iso.getdata();
			iso.area();
			iso.perimeter();

			break;

		case 2 :
			Equilateral equ;

			equ.getdata();
			equ.area();
			equ.perimeter();

			break;

		case 3 :
			exit(0);
			break;

		default :
			cout<<"invalid choice...\n\n";
			break;

	}

	goto again;
	getch();
	return 0;
}






