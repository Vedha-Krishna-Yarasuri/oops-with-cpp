#include<iostream>
using namespace std;
class Account
{
	private:
int accno,amount;
float balance;
char name[20];
	public:
	Account()
	{
		cout<<"enter the name of the account holder \n";
		cin>>name;
	cout<<"enter account number"<<endl;
	cin>>accno;
	cout<<"enter balance \n";
	cin>>balance;
	}
	Account(int x,char y[20])
	{
		name[20]=y[20];
	accno=x;
	balance=500.00;	
	}
	Account(int x,char y[20],float z)
	{
	accno=x;
	name[20]=y[20];
	balance=z;	
	}
	void Transfer(Account & a,float amount);
	
void Display()
{
cout<<"the name of the account holder is "<<name<<endl;
cout<<"the accoount number : "<<accno<<endl;
cout<<"amunt balance in the account "<<balance;	
}	
};

void Account :: Transfer(Account & a,float amount)
{
balance=balance-amount;
a.balance=a.balance+amount;	
}
int main()
{
Account a1;
Account a2(int x,char *y[20]);
Account a3(int x,char *y,float z);


a1.Display();
a2.Display();
a3.Display();

int transferamount;
cout<<"enter the amount to be transferred \n ";
cin>>transferamount;
a1.Transfer(a2,transferamount);

cout<<"updated account details are  .....";
a1.Display();
a2.Display();
a3.Display();
return 0;
}

