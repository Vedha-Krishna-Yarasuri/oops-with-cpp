#include<iostream>
using namespace std;
class Account1;
class Account2
{
	private:
	float balance;
	int accno;
	public:
	Account2()
	{
	cout<<"enter costumer id \n";
	cin>>accno;
	cout<<"enter balance amount :\n";
	cin>>balance;
	}
	Account2(float bal)
	{
	cout<<"enter account number : \n";	
	balance =bal;
	} 
	friend int get2data();
	friend int  sumbal(Account2 & acc2,Account1 & acc1);	
};
int Account2 :: get2data()
	{
		cout<<"your balance in the account is :\n";
	return balance;
	}
	
class Account1
{
	private:
	float balance;
	int accno;
	public:
	Account1()
	{
	cout<<"enter costumer id \n";
	cin>>accno;
	cout<<"enter balance amount :\n";
	cin>>balance;
	}
	Account1(float bal)
	{
	cout<<"enter account number : \n";	
	balance =bal;
	} 
	friend int get1data();
	
	friend int  sumbal(Account2 & acc2,Account1 & acc1);	
};
int Account1 :: get1data()
	{
		cout<<"your balance in the account is :\n";
	return balance;
	}
int sumbal(Account2 & acc2,Account1 &acc1)
{
int sum=0;
sum=acc1.balance+acc2.balance;
return sum;	
}
int main ()
{
Account1 a1,a2(5000);
Account2 b1,b2(10000);
a1.get1data();
a2.get1data();
b1.get2data();
b2.get2data();
cout<<"total sum balance of accounts a1 ,a2 ,b1,b2 is :\t"<<sumbal(b1,a1)+sumbal(b2,a2);
return 0;
}
