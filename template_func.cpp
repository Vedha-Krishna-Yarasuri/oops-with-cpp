#include <iostream>
using namespace std;
template<class T>
T swap(T *x,T *y);					//case--2		//         void swap(T *x,T *y)
														//			{
														//			T temp;
														//			temp=*x;
														// 			*x=*y;
														//			*y=temp;	
														//			}			



int main()
{
	char a,b;
	cin>>a>>b;
	cout<<"swaping occurs..........\n";
	swap(&a,&b);
	cout<<"after swaping ...........\n";
	cout<<a<<b;
	
	float c,d;
	cin>>c>>d;
	cout<<"swaping occurs...........\n";
	swap(c,d);
	cout<<"after swaping..............\n"<<c<<d;
	return 0;
}
template<class T>                 //case--2          // here uou can delete this and past over
T swap(T *x,T *y)
{
T temp;
temp=*x;
*x=*y;
*y=temp;	
return temp;
}
