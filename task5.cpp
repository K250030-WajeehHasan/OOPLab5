#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};
class Teacher:virtual public Person
{
public:
    string subject;
};
class Student:virtual public Person
{
public:
    int sid;
};
class TA:public Teacher,public Student
{
public:
    void inputAll()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Age:";
        cin>>age;
        cout<<"Subject:";
        cin>>subject;
        cout<<"ID:";
        cin>>sid;
    }
    void displayAll()
    {
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
        cout<<"Subject:"<<subject<<endl<<"ID:"<<sid<<endl;
    }
};
int main()
{
    TA t1;
    t1.inputAll();
    cout<<"\nDetails:\n";
    t1.displayAll();
    return 0;
}