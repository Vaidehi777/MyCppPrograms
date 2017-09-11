#include<stdio.h>
#include<conio.h>
#include<iostream.h>

#define PI 3.14

inline float area(float r)
	{
	return PI*r*r;
	}

inline float area(float b,float h)
	{
	return (b*h)/2;
	}

inline float area(double s)
	{
	return s*s;
	}

inline float area(double l,double w)
	{
	return l*w;
	}

int main()
{
int s;
clrscr();

cout<<"for which u want to find the area : \n 1)circle \n 2)triangle \n 3)square \n 4)rectangle \n\n enter ur choice : ";
cin>>s;

enum a{cicle=1,triangle,square,rectangle};
switch(s)
	{
	case cicle : 	float r;
			cout<<"r : ";
			cin>>r;
			float ans;
			ans=area(r);
			cout<<"area of circle is "<<ans;
			break;

	case triangle : float b,h;
			cout<<"base : ";
			cin>>b;
			cout<<"height : ";
			cin>>h;
			float ans1;
			ans1=area(b,h);
			cout<<"area of triangle is "<<ans1;
			break;

	case square :   double s;
			cout<<"side : " ;
			cin>>s;
			double ans2;
			ans2=area(s);
			cout<<"area of square is "<<ans2;
			break;

	case rectangle :double l,w;
			cout<<"length : ";
			cin>>l;
			cout<<"height : ";
			cin>>h;
			double ans3;
			ans3=area(l,w);
			cout<<"area of rectangle is "<<ans3;
			break;

	default :       cout<<"invalid choice...";
			break;

	}

getch();
return 0;
}



 