#include<iostream.h>
#include<conio.h>
#include<process.h>

class Account
{
	protected:
		int no;
		char name[10];
		float balance;
	public :
		Account ()
		{
			balance = 0;
		}
		void getdata();
		void putdata();
		void deposit();
		void withdraw();
	};

void Account :: getdata()
{
	cout<<"\nid : ";
	cin>>no;
	cout<<"name : ";
	cin>>name;
}

void Account :: putdata()
{
	cout<<"\nname : "<<name;
	cout<<"\nid : "<<no;
	cout<<"\nbalance : "<<balance;
	cout<<"\n\n";
}

void Account :: deposit()
{
	float amount;
	cout<<"enter amount to deposit : ";
	cin>>amount;
	balance = balance + amount;
	cout<<"successfully done.\n\n";
}

void Account :: withdraw()
{
	float amount;
	cout<<"amount : ";
	cin>>amount;
	balance = balance - amount;
	cout<<"successfully done.\n\n";
}

class Current : public Account
	{
	protected :
		float loan_amt;
	public :
		Current()
		{
			loan_amt = 0;
		}
		void loan();
	};

void Current :: loan()
{
	float interest;
	int n;
	cout<<"Enter loan period:";
	cin>>n;
	loan_amt = ( balance * 200 ) / 100;
	interest = ( ( loan_amt * 10 ) / 100 ) * n;
	cout<<"maximum loan : "<<loan_amt;
	cout<<"payable interest at the end of "<<n<<" years is "<<interest;
}

class Savings : public Account
	{
	public :
		Savings()
			{
			balance = 0;
			}
		void interest( int, int);
	};

void Savings :: interest(int n, int r = 4)
	{
	float interest;
	interest = (balance * r * n) / 100;
	cout<<"interest : "<<interest;
	}

int main()
	{
	clrscr();

	int ch;
	cout<<"1) saving account \n2) current account \nenter account type : ";
	cin>>ch;

	enum type { saving_acc = 1 , current_acc };

	switch(ch)
		{
		case saving_acc :
				Savings obj_s;
				obj_s.getdata();

				int choice;
			again : cout<<"\n1) deposit \n2) withdraw \n3) interest \n4) display \n5) exit \nenter your choice : ";
				cin>>choice;

				switch(choice)
					{
					case 1 :
						obj_s.deposit();
						break;

					case 2 :
						obj_s.withdraw();
						break;

					case 3 :
						obj_s.interest(1);
						break;

					case 4 :
						obj_s.putdata();
						break;

					case 5 :
						exit(0);
						break;

					default :
						cout<<"invalid choice...\n\n";
						break;
					}
				goto again;
				break;

		case current_acc :
				 Current obj_c;
				 obj_c.getdata();

				 int choice_c;
			again1 : cout<<"\n1) deposit \n2) withdraw \n3) loan \n4) display \n5) exit \nenter your choice : ";
				 cin>>choice_c;

				 switch(choice_c)
					{
					case 1 :
						obj_c.deposit();
						break;

					case 2 :
						obj_c.withdraw();
						break;

					case 3 :
						obj_c.loan();
						break;

					case 4 :
						obj_c.putdata();
						break;

					case 5 :
						exit(0);
						break;

					default :
						cout<<"invalid choice...\n\n";
						break;
					}
				goto again1;
				break;
		default :
				cout<<"invalid choice...";
				exit(0);
				break;
		}

	getch();
	return 0;
	}















