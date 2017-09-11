#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();

	float x;
	cout.setf(ios::scientific,ios::floatfield);
	cout<<"for sci : ";
	cin>>x;
	cout<<x;

	int y;
	cout.setf(ios::hex,ios::basefield);
	cout<<"\n\nfor hex : ";
	cin>>y;
	cout<<y;

	int z;
	cout.setf(ios::oct,ios::basefield);
	cout<<"\n\nfor oct : ";
	cin>>z;
	cout<<z;

	float v;
	cout.unsetf(ios::scientific);
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	cout<<"\n\nfor showpoint && showpos : ";
	cin>>v;
	cout<<v;

	getch();
	return 0;
}