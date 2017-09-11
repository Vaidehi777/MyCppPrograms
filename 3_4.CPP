#include<stdio.h>
#include<conio.h>
#include<iostream.h>

inline float simple_int(int amount,int no_of_year,float r=8.5)
	{
	return (amount * no_of_year * r) / 100;
	}

int main()
{
int amount,no_of_year;
clrscr();

cout<<"amount : ";
cin>>amount;

cout<<"no of year : ";
cin>>no_of_year;

int ans;
ans=simple_int(amount,no_of_year);

cout<<"total interest is "<<ans;

getch();
return 0;
}