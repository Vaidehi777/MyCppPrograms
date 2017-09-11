#include<iostream.h>
#include<conio.h>

class Student
{
protected :
	char name[10];
	int rollno;
public :
	void getdata();
};

void Student :: getdata()
{
	cout<<"name : ";
	cin>>name;
	cout<<"rollno : ";
	cin>>rollno;
}

class Test : public virtual Student
{
protected :
	int marks[5][5];
public :
	void getdata();
};

void Test :: getdata()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		cout<<"\nenter marks for test"<<i+1<<") :-\n";
		for(j=0;j<5;j++)
		{
			cout<<j+1<<") : ";
			cin>>marks[i][j];
		}
	}
}

class Sports : public virtual Student
{
protected :
	int level;
public :
	void getdata();
};

void Sports :: getdata()
{
	cout<<"1) national";
	cout<<"2) state";
	cout<<"3) college";
	cout<<"enter level : ";
	cin>>level;
}

class Result : public Test,public Sports
{
protected :
	float pr;
public :
	void putresult();
};

void Result :: putresult()
{
	float total_mark;
	int i,j,sum=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum=sum+marks[i][j];
		}
	}

	if(level==1)
	{
	sum=sum+20;
	}
	if(level==2)
	{
	sum=sum+10;
	}
	if(level==3)
	{
	sum=sum+5;
	}

	cout<<"result : ";
	cout<<"\ntotal marks : "<<sum;

	pr= (float)sum/25;
	cout<<"\npercentage : "<<pr<<"%";
}

int main()
{
	clrscr();

	Result r;

	r.Student :: getdata();
	r.Test :: getdata();
	r.Sports :: getdata();
	r.putresult();

	getch();
	return 0;
}