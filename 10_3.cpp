#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	float no;
	
	cout<<"no : ";
	cin>>no;
	
	try
	{
		int choice;
		cout<<"\n1) sqrt";
		cout<<"\n2) divide";
		cout<<"\nEnter your choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1 :
					if(no<0)
					{
						throw 0;
					}
					else
					{
						cout<<sqrt(no);
					}
					break;
			case 2 :
					float b;
					cout<<"Enter no to divided by : ";
					cin>>b;
					if(b==0)
					{
						throw 1;
					}
					else
					{
						cout<<no/b;
					}
					break;
			default :
					cout<<"Envalid choice...";
					break;
		}
	}
	catch(...)
	{
		cout<<"Error...";
	}
	getch();
	return 0;
}
