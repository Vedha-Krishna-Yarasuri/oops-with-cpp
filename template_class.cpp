#include <iostream>
using namespace std;
template <class T>
class vector
{
private:
T *v;
int size;
public:
vector (int v_size)
{
size=v_size;
v=new T[v_size];	
}	
~vector()
{
cout<<"distructor called ......\n";
delete v;	
}
T element(int i);
void show();
};
template<class T>
T vector <T> :: element(int i)
{
if (i>=size)
{
cout<<"error size limit exceded...\n";	
}	
else
{
return v[i];	
}
return 0;
}
template<class T>
void vector<T>::show()
{
int i=0;
cout<<"the values in the array is ...\n";
for(i=0;i<size;i++)
{
cout<<element(i)<<"\t";
}	
}
int main ()
{
int i;
vector<int> v1(5);
for(i=0;i<5;i++)
{
v1.element(i)=i+1;	
}	
v1.show();

vector<float> v2(5);
for(i=0;i<5;i++)
{
v2.element(i)=i+2.00003;	
}
v2.show();

return 0;
}
