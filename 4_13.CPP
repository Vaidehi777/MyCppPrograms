#include<iostream.h>
#include<conio.h>

class DM;

class DB
	{
		float m,cm;
	public :
		void getdata();
		friend void add (DB , DM);
	};

class DM
	{
		float feet,inch;
	public :
		void getdata();
		friend void add (DB , DM);
	};

void DB :: getdata()
	{
	cout<<"meter : ";
	cin>>m;
	cout<<"cm : ";
	cin>>cm;
	}

void DM :: getdata()
	{
	cout<<"feet : ";
	cin>>feet;
	cout<<"inch : ";
	cin>>inch;
	}

void add (DB a , DM b)
	{
	int ch;

	cout<<"\nur desired o/p should be in : \n";
	cout<<"1) meter-centimeter or \n";
	cout<<"2) feet-inch \n\n";
	cout<<"enter ur choice : ";
	cin>>ch;

	switch(ch)
		{
		case 1 :
			a.m = a.m + ( 3.28 * b.feet);
			a.cm = a.cm + (0.3937 * b.inch);

			cout<<"\n\nans : "<<a.m<<" meter , "<<a.cm<<" centimeter.";
			break;

		case 2 :
			b.feet = b.feet + ( 0.3048 * a.m);
			b.inch = b.inch + ( 2.54 * a.cm);

			cout<<"\n\nans : "<<b.feet<<" feet , "<<b.inch<<" inch.";
			break;

		default :
			cout<<"\n\ninvalid choice...";
			break;
		}

	}

int main()
	{
	DB mcm;
	DM fi;

	clrscr();

	cout<<"enter distance in meter-centimeter :-\n\n";
	mcm.getdata();
	cout<<"\nenter distance in feet-inch :- \n\n";
	fi.getdata();

	add(mcm,fi);

	getch();
	return 0;
	}

