#include<iostream.h>
#include<conio.h>
#include<string.h>

class String
{
	char string[100];
public :
	void get();
	void put();
	int operator ==(String);
	void operator +(String);
};

void String :: get()
{
	cin>>string;
}

void String :: put()
{
	cout<<string;
}

int String :: operator ==(String x)
{
	int i;
	i = strcmp(string,x.string);
	return i;
}

void String :: operator +(String x)
{
	strcat(string,x.string);
	cout<<string;
}

int main()
{
	String s1,s2;
	int ans;
	clrscr();

	cout<<"enter string 1 : ";
	s1.get();

	cout<<"enter string 2 : ";
	s2.get();

	ans = (s1==s2);
	if(ans==0)
	{
		cout<<"\nsame\n";
	}
	else
	{
		cout<<"\nnot same\n";
	}

	s1+s2;

	getch();
	return 0;
}



