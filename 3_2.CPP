#include<stdio.h>
#include<conio.h>
#include<iostream.h>

inline float cube(float a)
	{
	return a*a*a;
	}

int main()
{
float a;
clrscr();

cout<<"a : " ;
cin>>a;

float ans;
ans=cube(a);

cout<<"volume of a cube is "<<ans;

getch();
return 0;
}