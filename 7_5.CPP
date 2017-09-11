#include<iostream.h>
#include<conio.h>

class Vector
{
	int set[7];
public :
	friend istream & operator >>(istream &,Vector &);
	friend ostream & operator <<(ostream &,Vector &);
};

istream & operator >>(istream &din,Vector &x)
{
	int i;
	for(i=0;i<7;i++)
	{
		cout<<i+1<<") : ";
		cin /* or din */ >>x.set[i];
	}
	return din;
}

ostream & operator <<(ostream &dout,Vector &x)
{
	int i;
	for(i=0;i<7;i++)
	{
		cout /* or dout */ <<x.set[i]<<"\n";
	}
	return dout;
}

int main()
{
	clrscr();

	Vector v;

	cout<<"Vector :- \n";
	cin>>v;
	cout<<"result :- \n";
	cout<<v;

	getch();
	return 0;
}

