#include<iostream.h>
#include<conio.h>
#include<math.h>

class Rectangular
{
public :
	float x,y;

	void putdata();
};

void Rectangular :: putdata()
{
	cout<<"x : "<<x;
	cout<<"\ny : "<<y;
}

class Polar
{
public :
	float r,thita;

	void getdata();
	operator Rectangular ()
	{
		Rectangular temp;
		temp.x = r * cos(thita);
		temp.y = r * sin(thita);
		return temp;
	}
};

void Polar :: getdata()
{
	cout<<"r : ";
	cin>>r;
	cout<<"thita : ";
	cin>>thita;
}

int main()
{
	clrscr();

	Polar p1;
	Rectangular r1;

	cout<<"enter polar coordinates : \n";
	p1.getdata();

	cout<<"\nRectangular Form : \n";
	r1 = p1;
	r1.putdata();

	getch();
	return 0;
}



