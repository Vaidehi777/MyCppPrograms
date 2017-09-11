#include<iostream.h>
#include<conio.h>

class Item
{
	char name[10];
	int code;
	float cost;
public :
	void getdata();
	void display();
};

void Item :: getdata()
{
	cout<<"Item name : ";
	cin>>name;
	cout<<"Item code : ";
	cin>>code;
	cout<<"Item cost : ";
	cin>>cost;
}

void Item :: display()
{
	cout.width(10);
	cout.setf(ios::left,ios::adjustfield);
	cout<<name;

	cout.width(10);
	cout.setf(ios::right,ios::adjustfield);
	cout<<code;

	cout.width(10);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<cost;
}

int main()
{
	Item a[2];
	clrscr();
	int i;

	for(i=0;i<2;i++)
	{
		cout<<"enter data for Item "<<i+1<<") : \n";
		a[i].getdata();
	}
	cout<<"\n\n\n";
	cout<<"NAME";
	cout.width(16);
	cout<<"CODE";
	cout.width(10);
	cout<<"COST";
	cout<<"\n";
	for(i=0;i<2;i++)
	{
		a[i].display();
		cout<<"\n";
	}
	getch();
	return 0;
}

