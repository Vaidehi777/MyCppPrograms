#include<stdio.h>
#include<conio.h>
#include<iostream.h>

inline void abs(float n)
	{
	if(n<0)
		{
		n=n*(-1);
		}
	cout<<"absolute value is "<<n;
	}

inline void abs(int n)
	{
	if(n<0)
		{
		n=n*(-1);
		}
	cout<<"absolute value is "<<n;
	}

int main()
{
float no;
clrscr();

cout<<"enter no : ";
cin>>no;
abs(no);

getch();
return 0;
}