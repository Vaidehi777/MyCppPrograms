#include<iostream.h>
#include<conio.h>

class Base
	{
	int val1,val2;

	public :
		void get();
		friend float mean (Base);
	};

void Base :: get()
	{
	cout<<"\n\nval 1 : ";
	cin>>val1;

	cout<<"val 2 : ";
	cin>>val2;
	}

float mean (Base x)
	{
	return (x.val1 + x.val2) / 2;
	}

int main()
{
Base b;
clrscr();

cout<<"enter data for object b :- ";
b.get();

float ans;
ans = mean(b);

cout<<"\n\nresult :- ";
cout<<"\nmean value for object b : "<<ans;

getch();
return 0;
}