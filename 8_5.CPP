#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

ostream & format (ostream & output)
{
	output.width(15);
	output.precision(3);
	output<<setfill('*');
	output<<setiosflags(ios::showpoint);

	return output;
}

int main()
{
	clrscr();

	float i=123;

	cout<<123.4567<<"\n"
	<<format<<7777.7777<<"\n"
	<<format<<i<<"\n"
	<<format<<123;

	getch();
	return 0;
}