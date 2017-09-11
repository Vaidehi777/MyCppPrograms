#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c;
	float x1,x2;
	
	cout<<"a : ";
	cin>>a;
	cout<<"b : ";
	cin>>b;
	cout<<"c : ";
	cin>>c;
	
	try
	{
		float delta;
		delta = (b*b)-(4*a*c);
		if(delta<0)
		{
			throw 1;
		}
		else if( delta == 0 )
		{
			x1 = x2 = (-b)/(2*a);
			cout<<x1<<endl<<x2;
		}
		else
		{
			x1 = ((-b) + (sqrt(delta)) ) / (2*a);
			x2 = ((-b) - (sqrt(delta)) ) / (2*a);
			cout<<x1<<endl<<x2;
		}
	}
	catch(int)
	{
		cout<<"error : imaginary roots";
		
	}
	
	getch();
	return 0;
}
