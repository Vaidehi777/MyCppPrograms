#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int no;
	
	cout<<"no : ";
	cin>>no;

	try
	{
		if( no % 3 == 0)
		{
			throw 1;
		}
		else
		{
			cout<<no/3;
		}
	}
	catch(int)
	{
		cout<<"error";
	}
	
	getch();
	return 0;		
}
