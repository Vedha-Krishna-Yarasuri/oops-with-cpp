#include<iostream>
using namespace std;
class Student
{
private:
int total,average,sid,m1,m2,m3;
char name;
public:
int Total()
{
total=m1+m2+m3;
return total;	
}
int Average()
{
average=total/3;
return average;	
}
	void setStudent(); //line-1 
	void getStudent();
};

   inline void Student :: setStudent()  //inline is a function which puts the whole setStudent () on  the line-1 
	{
	cout<<"enter the student id "<<endl;
	cin>>sid;
	cout<<"enter the name of the student "<<endl;
	cin>>name;
	cout<<"enter the marks of the student "<<endl;
	cin>>m1>>m2>>m3;
	}
    inline void Student :: getStudent()
	{
	cout<<"the student id is "<<sid<<endl;
	cout<<"the name of the student is "<<name<<endl;
	cout<<"the mark 1 of the student is "<<m1<<endl;
	cout<<"the mark 2 of the student is "<<m2<<endl;
	cout<<"the mark 3 of the student is "<<m3<<endl;
	cout<<"the total marks of the student is "<<total<<endl;	
	cout<<"the average mark of the student is "<<average<<endl;
	}
	
	int main ()
	{
	Student std;
	std.setStudent();
	std.Total();
	std.Average();
	std.getStudent();	
	}

