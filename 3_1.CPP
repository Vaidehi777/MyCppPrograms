#include<stdio.h>
#include<conio.h>
#include<iostream.h>

#define PI 3.14

inline float area(float a)
	{
	return PI*a*a;
	}

int main()
{
float r;
clrscr();

cout<<"enter radious : " ;
cin>>r;

float a;
a=area(r);

cout<<"area of circle is "<< a;

getch();
return 0;
}


