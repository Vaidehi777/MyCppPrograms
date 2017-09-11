#include<stdio.h>
#include<conio.h>
#include<iostream.h>

inline double plus(double a,double b)
	{
	return a+b;
	}

int main()
{
double a,b;
clrscr();

cout<<"a : ";
cin>>a;

cout<<"b : ";
cin>>b;

double ans = plus(a,b);

cout<<"sum : "<<ans;

getch();
return 0;
}