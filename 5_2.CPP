#include<iostream.h>
#include<conio.h>

class Interest
	{
		float p,r;
		int n;
	public :
		void getdata();
		void compound();
		Interest( float x , float y, int z = 9.5)
			{
			p=x;
			r=z;
			n=y;
			}
	};

void Interest :: getdata()
	{
	cout<<"p : ";
	cin>>p;
	cout<<"r : ";
	cin>>r;
	cout<<"n : ";
	cin>>n;
	}

void Interest :: compound()
	{
	cout<<"\n\ncompound Interest : "<<(p*r*n)/100;
	}

int main()
	{
   //	Interest i1;
	Interest i2(20,30),i3(20,30,10);
	clrscr();

   //	i1.compound();
	i2.compound();
	i3.compound();

	getch();
	return 0;
	}
