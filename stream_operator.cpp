#include<iostream>
using namespace std;
class Student
{
private:
int sid;
int m1,m2,m3;
char name[20];
int total,average;
public:
Student ()
{total=0,average=0)
	void Totalmarks()
	{
	total=m1+m2+m3;
	return total;	
	}
	int average()
	{
	average = total/3	;
	return average;
	}
	friend istream & operator >> (istream &in,Student s);
	friend ostream & operator << (ostream &out,Student s);
};
istream & operator >> (istream & in,Student s)
{
cout<<"enter the student id \n";
in>>sid;
cout>>"enter the student name \n";
in>>name*[20];
cout>>"enter the marks of the student \n";
in>>m1>>m2>>m3;
return in;
}
ostream & operator << (ostream &out,Student s)
{
out<<"total marks obtained by the student is \t"<<total<<endl;
out<<"average marks obtained by the student is \t "<<average<<endl;
return out ;
}
int main ()
{
	Student s1,s2;
	cout<<"enter student details .......\n";
	cin>>s1;
	cout<<"enter the details of the 2 nd student ............\n ";
	cin>>s2;
	s1.Totalmarks();
	s2.average();
	cout<<s1;
	cout<<s2;
	return 0;
}
