#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	fstream fout("file.txt",ios::out);
	fout<<"vaidehi";
	fout.close();
	
	fstream fin("file.txt",ios::in);
	fin.seekg(0,ios::end);
	int size = fin.tellg();
	fin.close();
	
	cout<<size<<" bytes";
	
	getch();
	return 0;
}
