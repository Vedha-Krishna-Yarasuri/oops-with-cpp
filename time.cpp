#include<iostream>
using namespace std;
class Time
{
private:
int hour,minuit,second;
public:
Time(int h,int m,int s)
{
hour=h;
minuit=m;
second=s;	
}
	
void clock();
};
 
 inline void Time :: clock()
 {
	cout<<"the proper time will be \n";
	cout<<hour<<":"<<minuit<<":"<<second<<endl;
}
 
 int main()
 {
int h,m,s;

cout<<"enter the hours \n";
cin>>h;
cout<<"enter minuit\n";
cin>>m;
cout<<"enter second\n";
cin>>s;


Time  t1(h,m,s);
t1.clock();
return 0;
}
