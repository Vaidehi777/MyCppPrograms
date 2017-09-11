#include<iostream.h>
#include<conio.h>
#include<math.h>

class Polar;

class Rectangular
	{
		int x,y;
	public :
		void getdata();
	 //	void putdata();
		friend void add (Rectangular , Polar);
	};

class Polar
	{
		int r,thita;
	public :
		void getdata();
	  //	void putdata();
		friend void add (Rectangular , Polar);
	};

void Rectangular :: getdata()
	{
	cout<<"x : ";
	cin>>x;
	cout<<"y : ";
	cin>>y;
	}

void Polar :: getdata()
	{
	cout<<"r : ";
	cin>>r;
	cout<<"thita : ";
	cin>>thita;
	}

void add (Rectangular a, Polar b)
	{
	int ch;
	cout<<"\n\nans should be in :- \n";
	cout<<"1) Rectangular form or \n";
	cout<<"2) Polar form \n";
	cout<<"enter ur choice : ";
	cin>>ch;

	enum abc { Rectangular = 1 , Polar };

	switch(ch)
		{
		case Rectangular :
			a.x = a.x + b.r * cos(b.thita);
			a.y = a.y + b.r * sin(b.thita);
			cout<<a.x<<" ";
			cout<<a.y;
			break;

		case Polar :
			b.r = b.r + sqrt( (a.x * a.x) + (a.y * a.y));
			b.thita = b.thita + tan (a.y / a.x);
			cout<<b.r<<" ";
			cout<<b.thita;
			break;

		default :
			cout<<"invalid choice...";
			break;
		}
	}

int main()
{
Rectangular re;
Polar po;

clrscr();

re.getdata();
po.getdata();

add (re,po);

getch();
return 0;
}






