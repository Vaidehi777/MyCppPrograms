#include<iostream.h>
#include<conio.h>

template < class T >

class Vector
{
	T set[5];
public :
	void get();
	void put();
	void sort();
};

template <class T>
void Vector <T> :: get()
{
	int i;
	cout<<"Enter 5 elements of Vector set...\n";
	for(i=0;i<5;i++)
	{
		cin>>set[i];
	}
}

template <class T>
void Vector <T> :: put()
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<set[i]<<" ";
	}
}

template<class T>
void Vector <T> :: sort()
{
	int i,j;
	T temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if( set[i] < set[j] )
			{
				temp = set[i];
				set[i]=set[j];
				set[j]=temp;
			}
		}
	}
}

int main()
{
	clrscr();

	Vector <int> v;

	v.get();
	v.sort();
	v.put();

	getch();
	return 0;
}

