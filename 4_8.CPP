#include<iostream.h>
#include<conio.h>

class Weight
	{
	int kg,gm;

	public :
		void getdata();
		void putdata();
		void sum (Weight,Weight);
	};

void Weight :: getdata()
	{
	cout<<"\n\nkg : ";
	cin>>kg;

	cout<<"gm : ";
	cin>>gm;
	}

void Weight :: putdata()
	{
	cout<<"\n\nResult : \n";
	cout<<"kg : "<<kg<<"\n";
	cout<<"gm : "<<gm<<"\n";
	}

void Weight :: sum(Weight x, Weight y)
	{
	kg = x.kg + y.kg;
	gm = x.gm + y.gm;

	kg = kg + (gm/1000);
	gm = (gm%1000);
	}

int main()
{
Weight a,b,c;
clrscr();

cout<<"enter data for object a :- ";
a.getdata();
cout<<"\n\nenter data for object b :- ";
b.getdata();
c.sum(a,b);
c.putdata();

getch();
return 0;
}