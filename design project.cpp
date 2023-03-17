#include<iostream>
using namespace std;

class Employee
{
int id;
char name[30];
float salary;
public:
void getdata();
void putdata();
};
void Employee::getdata()
{
cout<<"Enter Id : ";
cin>>id;
cout<<"Enter Name : ";
cin>>name;
cout<<"Enter salary: ";
cin>>salary;
}
void Employee::putdata()
{
cout<<id<<" ";
cout<<name<<" ";
cout<<salary<<"";
cout<<endl;
}
int main()
{
Employee emp; 
emp.getdata();
emp.putdata();
return 0;

}

