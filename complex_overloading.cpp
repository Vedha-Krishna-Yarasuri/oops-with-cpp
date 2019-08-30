#include<iostream>
#include<math.h>
using namespace std;
class Complex 
{
float real,imag;
public:
Complex ()
{
real=imag=0.0;	
}	
void setdata()
{
cout<<"\nenter real value ";
	cin>>real;
	cout<<"\n enter imag value \n";
	cin>>imag;
}
void display(char *msg)
{
	cout<<msg<<"="<<real;
	if (imag<0)
	{
	cout<<"-i";
	}
	else
	{
	cout<<"+i";	
	}
	cout<<fabs(imag)<<endl;
}
Complex operator +(Complex c);
};
Complex Complex :: operator +(Complex c)
{
Complex temp;
temp.real=real+c.real;
temp.imag=imag+c.real;	
return temp;
}

int main ()
{
Complex c1,c2,c3;

cout<<"\enter c1.......\n";
c1.setdata();
cout<<"\enter c2.......\n";
c2.setdata();
c1.display("c1");
c2.display("c2");

c3=c1+c2;

c3.display("c3");
return 0;
}
