#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>

class Rectangular;

class Polar
{
	float r,a;
public :
	void getdata();
	void putdata();
	friend void operator +(Polar,Rectangular);
};

void Polar :: getdata()
{
	cout<<"r : ";
	cin>>r;
	cout<<"a : ";
	cin>>a;
}

void Polar :: putdata()
{
	cout<<"r : "<<r;
	cout<<"\na : "<<a;
}

class Rectangular
{
	float x,y;
public :
	void getdata();
	void putdata();
	friend void operator +(Polar,Rectangular);
};

void Rectangular :: getdata()
{
	cout<<"x : ";
	cin>>x;
	cout<<"y : ";
	cin>>y;
}

void Rectangular :: putdata()
{
	cout<<"x : "<<x;
	cout<<"\ny : "<<y;
}

void operator +(Polar p,Rectangular r)
{
	int ch;
	cout<<"\nans type : ";
	cout<<"\n1) Rectangular , ";
	cout<<"\n2) Polar...";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;

	switch(ch)
	{
		case 1 :
			Rectangular temp;
			temp.x = r.x + (p.r * cos(p.a));
			temp.y = r.y + (p.r * sin(p.a));
			temp.putdata();

			break;
		case 2 :
			Polar temp1;
			temp1.a = p.a + (tan(r.y/r.x));
			temp1.r = p.r + (sqrt((r.x*r.x) + (r.y*r.y)));
			temp1.putdata();

			break;
		default :
			cout<<"invalid choice...";
			break;
	}
}

int main()
{
	clrscr();

	Polar obj1;
	Rectangular obj2;

	cout<<"enter polar coordinates : \n";
	obj1.getdata();
	cout<<"enter rectangular coordinates : \n";
	obj2.getdata();
	obj1+obj2;

	getch();
	return 0;
}



