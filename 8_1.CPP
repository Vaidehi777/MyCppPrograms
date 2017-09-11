#include<iostream.h>
#include<conio.h>
#include<math.h>

int main()
{
	clrscr();
	int i;
	for(i=1;i<=20;i++)
	{
		cout.width(3);
		cout<<pow(i,2)<<"\n";
	}
	getch();
	return 0;
}