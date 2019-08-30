#include<iostream>
using namespace std;
class Distance
{
	float feet,inch;
	public:
	int  data(float x,float y)
	{
	feet=x;
	inch=y;	
		if (inch>=12)
		{
			cout<<"enter inch value in the range of 0-11\n";
			return 0;
		}
		return 0;
	}
	
Distance operator +(Distance d)
{
Distance temp;
temp.feet=feet+d.feet;
temp.inch=inch+d.inch;	
return temp;
}
void calculation(Distance temp)
{
	if (temp.inch>12)
	{
		temp.feet=temp.feet+1;
		temp.feet=temp.feet-12;
	}	
	cout<<"total Distance = \t"<<temp.feet<<" feet"<<temp.inch<<" inches ";
}
};


int main ()
{

	float a,b,c,d;
	cout<<"enter value of feet for d1\n";
	cin>>b;
	cout<<"enter value of inch for d1\n";
	cin>>a;
	cout<<"enter value of feet for d2 \n";
	cin>>c; 
	cout<<"enter value of inch for d2 \n";
	cin>>d;
Distance d1;
Distance d2;
d1.data( a, b);
d2.data( a, b);

Distance d3;

	d3=d1+d2;
	d3.calculation(d2);
	return 0;
}
