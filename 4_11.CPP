#include<iostream.h>
#include<conio.h>
#include<process.h>

class Scientist;

class Manager
	{
		char name[10];
		int salary;
	public :
		void getdata();
		void putdata();
		friend void tax ( Manager , Scientist );
	};

class Scientist
	{
		char name[10];
		int salary;
	public :
		void getdata();
		void putdata();
		friend void tax ( Manager , Scientist);
	};

void Manager :: getdata()
	{
	cout<<"name  : ";
	cin>>name;
	cout<<"salary : ";
	cin>>salary;
	}

void Scientist :: getdata()
	{
	cout<<"name  : ";
	cin>>name;
	cout<<"salary : ";
	cin>>salary;
	}

void tax ( Manager m , Scientist s )
	{
	int ch;

	cout<<"\n1) tax for Manager or \n";
	cout<<"2) tax for Scientist ? \n";
	cout<<"enter ur choice : ";
	cin>>ch;

	switch(ch)
		{
		case 1 :
			float mtax;
			cout<<m.salary;
			mtax = ( (m.salary) * 10 ) / 100;
			m.putdata();
			cout<<"\n\ntax to be paid : "<<mtax;
			break;

		case 2 :
			float stax;
			stax = ( (s.salary) * 5) / 100;
			s.putdata();
			cout<<"\n\ntax to be paid : "<<stax;
			break;

		default :
			cout<<"invalid choice...";
			exit(0);
			break;
		}
	}

void Manager :: putdata()
	{
	cout<<"\nManager name : "<<name;
	cout<<"\nManager salary : "<<salary;
	}

void Scientist :: putdata()
	{
	cout<<"\nManager name : "<<name;
	cout<<"\nManager salary : "<<salary;
	}

int main()
	{
	Manager ma;
	Scientist sc;

	clrscr();

	cout<<"Enter info for Manager :- \n";
	ma.getdata();
	cout<<"\nEnter info for Scientist :- \n";
	sc.getdata();

	tax(ma,sc);

	getch();
	return 0;
	}









