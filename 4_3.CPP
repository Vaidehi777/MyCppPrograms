#include<iostream.h>
#include<conio.h>

class Vector
	{
	float a[5];

	public :
		void getdata();
		void mulbyk();
		void putdata();
	};

void Vector :: getdata()
	{
	int i;
	cout<<"enter data series of 5 : ";
	for(i=0;i<=4;i++)
		{
		cin>>a[i];
		}
	}

void Vector :: mulbyk()
	{
	int k;
	cout<<"enter scaler value of k : ";
	cin>>k;

	int i;
	for(i=0;i<=4;i++)
		{
		a[i]=a[i]*k;
		}
	}

void Vector :: putdata()
	{
	int i,count=1;
	cout<<"<";
	for(i=0;i<=4;i++)
		{
		cout<<a[i];
		if(count<=4)
			{
			cout<<" , ";
			}
		count++;
		}
	cout<<">";
	}

int main()
{
clrscr();

Vector l;
l.getdata();
l.mulbyk();
l.putdata();

getch();
return 0;
}





