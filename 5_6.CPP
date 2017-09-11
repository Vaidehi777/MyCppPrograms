#include<iostream.h>
#include<conio.h>

class Counter
	{
		static int count;
	public :
		Counter()
			{
			count++;
			}
		void display();
	};

int Counter :: count = 0;

void Counter :: display()
	{
	cout<<count<<" objects are created...";
	}

int main()
	{
	Counter c1,v1,v2;
	clrscr();
		{
		Counter c2,c3;
		}
		c1.display();

	getch();
	return 0;
	}



