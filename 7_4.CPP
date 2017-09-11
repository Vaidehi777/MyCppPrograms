#include<iostream.h>
#include<conio.h>

class Vector
{
	int set[7];
public :
	void getdata();
	void putdata();
	Vector operator *(int);
};

void Vector :: getdata()
{
	cout<<"enter vector values : \n";
	int i;
	for(i=0;i<7;i++)
	{
		cout<<i+1<<") :- ";
		cin>>set[i];
	}
}

void Vector :: putdata()
{
	int i;
	cout<<"(";
	for(i=0;i<7;i++)
	{
		cout<<" "<<set[i];
		if(i<6)
		{
			cout<<",";
		}
	}
	cout<<")";
}

Vector  Vector :: operator *(int k)
{
	Vector temp;
	int i;
	for(i=0;i<7;i++)
	{
		temp.set[i]=set[i]*k;
	}
	return temp;
}

int main()
{
	Vector v;
	clrscr();

	v.getdata();

	int scalar;
	cout<<"enter scalar value : ";
	cin>>scalar;

	Vector ans;

	ans = v*scalar;
	ans.putdata();

	getch();
	return 0;
}

