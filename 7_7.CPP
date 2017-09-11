#include<iostream.h>
#include<conio.h>

class Account
{
	int no;
	double balance;
	char name[10];
public :
	void getdata();
	operator double()
	{
		return balance;
	}
};

void Account :: getdata()
{
	cout<<"enter acc no : ";
	cin>>no;
	cout<<"enter name : ";
	cin>>name;
	cout<<"enter balance : ";
	cin>>balance;
}

int main()
{
	Account a;
	clrscr();

	a.getdata();
	double x;
	x=a;
	cout<<x;

	getch();
	return 0;
}
