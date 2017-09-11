#include<iostream.h>
#include<conio.h>

class Weight
{
	int kg,gm;
public :
	void getdata();
	void putdata();
	Weight operator +(Weight);
};

void Weight :: getdata()
{
	cout<<"kg : ";
	cin>>kg;
	cout<<"gm : ";
	cin>>gm;
	cout<<"\n";
}

void Weight :: putdata()
{
	cout<<kg<<" kg ,"<<gm<<" gm.\n";
}

Weight Weight :: operator +(Weight x)
{
	Weight temp;

	temp.gm = gm + x.gm;

	temp.kg = kg + x.kg;
	temp.kg = temp.kg + (temp.gm / 1000);

	temp.gm = temp.gm % 1000;

	return temp;
}

int main()
{
	Weight obj1,obj2,ans;
	clrscr();

	cout<<"enter values for object 1 : \n";
	obj1.getdata();
	cout<<"enter values for object 2 : \n";
	obj2.getdata();

	ans = obj1 + obj2;
	cout<<"object1 + object2 : \n";
	ans.putdata();

	getch();
	return 0;
}


