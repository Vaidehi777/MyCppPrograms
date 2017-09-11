#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main( int argc, char *argv [] )
{
	int set[10] = {0,1,2,3,4,5,6,7,8,9};

	ofstream fodd,feven;

	fodd.open( argv[1] );
	feven.open( argv[2] );

	for(int i=0;i<10;i++)
	{
		if(set[i] % 2 == 0 )
		{
			feven<<set[i];
		}
		else
		{
			fodd<<set[i];
		}
	}

	fodd.close();
	feven.close();


	ifstream fread;
	char c;

	for(i=1;i<argc;i++)
	{
		fread.open( argv[i] );
		for(int j=0;j<10;j++)
		{
			fread.get(c);
			cout<<c<<"\t";
		}
		fread.close();
		cout<<"\n";
	}

	getch();
	return 0;
}
