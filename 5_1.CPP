#include<iostream.h>
#include<conio.h>

class Integer
	{
		int a,b;
	public :
		void putdata();
		Integer()
			{
			a=0;b=0;
			}
		Integer(int x,int y)
			{
			a=x;b=y;
			}
	};

void Integer :: putdata()
	{
	cout<<a<<"\n";
	cout<<b<<"\n";
	}

int main()
	{
	Integer i1,i2(7,77);
	Integer i3 = Integer(77,777);

	clrscr();

	i1.putdata();
	i2.putdata();
	i3.putdata();

	getch();
	return 0;
	}




