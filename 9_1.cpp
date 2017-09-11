#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("File1.txt");
	
	char name[10];
	int marks;
	cout<<"name : ";
	cin>>name;
	cout<<"marks : ";
	cin>>marks;
	
	fout<<name;
	fout<<marks;
	
	fout.close();
	
	ifstream fin("File1.txt");
	
	cout<<"name";
	cout.width(10);
	cout<<"marks"<<endl;
	
	fin>>name;
	cout<<name;
	fin>>marks;
	cout.width(10);
//	cout<<marks;
	
	fin.close();
	
	getch();
	return 0;
}
