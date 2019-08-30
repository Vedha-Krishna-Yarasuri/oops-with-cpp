#include<iostream>
using namespace std;
class Vector
{
	private:
	int *v;
	int size;
	public:
	Vector(int v_size)
	{
		cout<<"\nconstructor called \n";
		size=v_size;
		v=new int [v_size];
	}
	Vector(Vector &v2);
	void display();
	~Vector()
	{
		delete v;
	cout<<"destructor called automatically\n";
}	
int Copyvalues(int sizee)
{
if (sizee>size)	
{
cout<<"out of range \n";
}
else
{
return v[sizee];	
}
return 0;
}
};

	void Vector :: display()
	{
		int sizee;
	cout<<"values in the array are \n";
	for (sizee=0;sizee<5;sizee++)
	{
	cout<<Copyvalues(sizee);	
	}	
	}
	Vector::Vector(Vector &v2)
	{
		int i;
	cout<<"copy constructor involved \n";
	size=v2.size;
	for	(i=0;i<v2.size;i++)
	{
	v[i]=v2.v[i];	
	}
	}	
		
int main()
{
	int i;
Vector 	v2(5);
for (i=0;i<5;i++)
{
v2.Copyvalues(i);	
}
cout<<"array v2 id :\n";
v2.display();
Vector v1(v2);
cout<<"array v2 is :\n";
v2.display();
return 0;
}		
