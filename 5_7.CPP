#include<iostream.h>
#include<conio.h>

class Integer
	{
		static int count;
	public :
		Integer()
			{
			count++;
			cout<<"\n"<<count<<"th object created.";
			}
		~Integer()
			{
			cout<<"\n"<<count<<"th object deleted.";
			count--;
			}
	};

int Integer :: count = 0;

int main()
	{
	clrscr();
	Integer i1,i2,i3;
		{
		Integer i4,i5;
			{
			Integer i6;
			}
		}

	getch();
	return 0;
	}