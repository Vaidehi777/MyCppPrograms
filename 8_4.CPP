#include<iostream.h>
#include<conio.h>

ostream & r(ostream & output)
{
	output<<" Rs";
	return output;
}

ostream & d(ostream & output)
{
	output<<" $";
	return output;
}

ostream & tab(ostream & output)
{
	output<<"\t";
	return output;
}

int main()
{
	clrscr();

	cout<<123<<r<<tab<<77777<<d;

	getch();
	return 0;
}
