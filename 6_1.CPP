#include<iostream.h>
#include<conio.h>

class Employee
	{
		int id;
		char name[10];
		char dept[10];
	public :
		void getdata();
	 //	void putdata();
	};

class Salary : public Employee
	{
		float salary;
	public :
		void calc_salary();
		void putsalary();
	};

void Employee :: getdata()
	{
	cout<<"id : ";
	cin>>id;
	cout<<"\nname : ";
	cin>>name;
	cout<<"\ndept : ";
	cin>>dept;
	}

void Salary :: calc_salary()
	{
	float basic_pay;
	cout<<"enter your basic pay : ";
	cin>>basic_pay;

	float hra,da,ta,pf,net_pay;

	hra = ( basic_pay * 20 ) / 100;
	da = ( basic_pay * 50 ) / 100;
	ta= ( basic_pay * 5 ) / 100;
	pf = ( basic_pay * 8 ) / 100;

	net_pay = basic_pay + hra + ta + da - pf;

	salary = net_pay;
	}

void Salary :: putsalary()
	{
	cout<<"net salary : "<<salary;
	}

int main()
	{
	Salary e;

	clrscr();

	cout<<"enter details of Employee : \n";
	e.getdata();
	e.calc_salary();
	e.putsalary();

	getch();
	return 0;
	}