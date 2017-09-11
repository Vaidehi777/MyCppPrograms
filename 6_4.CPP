#include<iostream.h>
#include<conio.h>
#include<process.h>

class Staff
{
protected :
	int code;
	char name[10];
public :
	void get();
	void put();
};

void Staff :: get()
{
	cout<<"code : ";
	cin>>code;
	cout<<"name : ";
	cin>>name;
}

void Staff :: put()
{
	cout<<"\n"<<"code : "<<code;
	cout<<"\n"<<"name : "<<name;
}

class Teacher : public Staff
{
protected :
	char sub[10];
	char publication[10];
public :
	void get();
	void put();
};

void Teacher :: get()
{
	cout<<"subject : ";
	cin>>sub;
	cout<<"publication : ";
	cin>>publication;
}

void Teacher :: put()
{
	cout<<"\n"<<"subject : "<<sub;
	cout<<"\n"<<"publication : "<<publication;
}

class Typist : public Staff
{
protected :
	int speed;
public :
	void get()
	{
		cout<<"speed : ";
		cin>>speed;
	}
	void put()
	{
		cout<<"\n"<<"speed : "<<speed;
	}
};

class Officer : public Staff
{
protected :
	char grade;
public :
	void get()
	{
		cout<<"grade : ";
		cin>>grade;
	}
	void put()
	{
		cout<<"\n"<<"grade : "<<grade;
	}
};

class Regular : public Typist
{
	//no comments;
};

class Casual : public Typist
{
protected :
	int wages;
public :
	void get()
	{
		cout<<"wages : ";
		cin>>wages;
	}
	void put()
	{
		cout<<"\n"<<"wages : "<<wages;
	}
};

int main()
{
	clrscr();
	int choice;

 Main : cout<<"Menu : \n";
	cout<<"1) Teacher \n";
	cout<<"2) Typist \n";
	cout<<"3) Officer \n";
	cout<<"4) exit \n";
	cout<<"enter your choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1 :
			Teacher t;

			cout<<"\nData :- \n";
			t.Staff :: get();
			t.Teacher :: get();

			cout<<"\nResult :- ";
			t.Staff :: put();
			t.Teacher :: put();

			break;

		case 2 :
		  Sub : cout<<"\nEnter type :-\n";
			cout<<"1) Regular \n";
			cout<<"2) Casual \n";
			cout<<"3) back to main menu \n";
			cout<<"Enter choice : ";
			int ch;
			cin>>ch;

			switch(ch)
			{
				case 1 :
					Regular r;

					cout<<"\nData :- \n";
					r.Staff :: get();
					r.Typist :: get();

					cout<<"\nResult :- ";
					r.Staff :: put();
					r.Typist :: put();

					break;

				case 2 :
					Casual c;

					cout<<"\nData :- \n";
					c.Staff :: get();
					c.Typist :: get();
					c.Casual :: get();

					cout<<"\nResult :- ";
					c.Staff :: put();
					c.Typist :: put();
					c.Casual :: put();

					break;

				case 3 :
					cout<<"\n";
					goto Main;
					break;

				default :
					cout<<"\ninvalid choice...";
					break;
			}
			cout<<"\n";
			goto Sub;
			break;

		case 3 :
			Officer o;

			cout<<"\nData :- \n";
			o.Staff :: get();
			o.Officer :: get();

			cout<<"\nResult :- ";
			o.Staff :: put();
			o.Officer :: put();

			break;

		case 4 :
			exit(0);
			break;

		default :
			cout<<"\ninvalid choice...";
			break;
	}
	cout<<"\n\n";
	goto Main;

	getch();
	return 0;
}







