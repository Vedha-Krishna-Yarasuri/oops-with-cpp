#include<iostream>
using namespace std;
class Distance
{
float inch,feet;
public:
/* void setdata(float x,float y)
{
	cout<<"enter value of foot\n";
	cin>>y;
	cout>>"enter inch value\n";
	cin>>x;
}
*/
Distance ()
{
feet=0.0;
inch=0.0;	
}
Distance(float x,float y)
{
	
	feet=x;
	inch=y;
}	
Distance sum(Distance d);

void getdata()
{
	cout<<"foot value:"<<feet;	
	cout<<"inch value:"<<inch;
}

void calculation(Distance temp);
};

inline Distance  Distance::sum(Distance d2)
{
	Distance temp;
	temp.inch=inch+d2.inch;
	temp.feet=feet+d2.feet;
		return temp;
}

inline void Distance ::calculation(Distance temp)
{
	//int z;
	//z=inch/12;
	if (temp.inch>=12)
	{
		//temp.feet=temp.feet+z;
		//inch=inch-(12*z);
		
		temp.feet=temp.feet+1.0;
		temp.inch=temp.inch-12;
		
		
		cout<<"sum of the distances will be \n"<<temp.feet<<"feet "<<temp.inch<<"inches";
	}	
}


int main()
{
float  x,y,t,m;
	cout<<"enter value of foot\n";
	cin>>x;
	cout<<"enter inch value\n";
	cin>>y;
	cout<<"enter value of foot\n";
	cin>>t;
	cout<<"enter inch value\n";
	cin>>m;

Distance  d1(x,y);
Distance d2(t,m);
Distance  d3;
	
d3=d1.sum(d2);
d3.calculation(d3);
return 0;
}
