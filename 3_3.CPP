#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

inline int power(int a,int b=2)
	{
	return pow(a,b);
	}

int main()
{
int x;
clrscr();

cout<<"x : ";
cin>>x;

int s;
cout<<"enter choice :\n1)cube of x \n2)square of x \n";
cin>>s;

switch(s)
	{
	int ans;
	case 1 : ans=power(x,3);
		 cout<<ans;
		 break;
	case 2 : ans=power(x);
		 cout<<ans;
		 break;
	default: cout<<"invalid";
		 break;
	}

getch();
return 0;
}