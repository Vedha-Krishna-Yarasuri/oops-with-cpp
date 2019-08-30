#include<iostream>
#include<math.h>
using namespace std;
class Complex
{
	private:
	float real,imag;
		public:
		void getdata()
		{
		 cout<<"enter the real value \n";
		 cin>>real;
		 cout<<"enter the imaginary value \n";
		 cin>>imag;	
		}
		void Final(char *msg)
		{
		cout<<msg<<"="<<real;
				

		if (imag<0)
		{
		cout<<"-"<<fabs(imag)<<"i\n";	
		}
		else
		{
		cout<<"+"<<fabs(imag)<<"i\n";	
		}	
				

		}
Complex add(Complex c)
{
	Complex temp;
	temp.real=real+c.real;
	temp.imag=imag+c.imag;
	return temp;
}

};



int main ()
{
Complex c1,c2,c3;
c1.getdata();
c2.getdata();
c1.Final("c1");
c2.Final("c2");

cout<<"the addition of two complex numbers is .... \n";
	c3=c1.add(c2);
	c3.Final("c3");
	return 0;
}
