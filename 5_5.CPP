#include<iostream.h>
#include<conio.h>

class Factorial
{
	int x;
public :
	Factorial(int f)
	{
	x=f;
	}
	Factorial(Factorial &fact)
	{
		x = fact.x;
	}
	void factorial()
	{
		int i,ans=1;
		for(i=1;i<=x;i++)
		{
			ans = ans * i;
		}
		cout<<ans;
	}
};

int main()
{
	Factorial a(7);
	Factorial b(a);
	b.factorial();

	getch();
	return 0;
}