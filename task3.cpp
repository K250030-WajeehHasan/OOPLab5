#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person(string n,int a)
    {
        name=n;
        age=a;
    }

    void displayP()
    {
        cout<<"Name:"<<name<<" Age:"<<age<<endl;
    }
};

class Student:public Person
{
protected:
    int sid;
    string program;
public:
    Student(string n,int a,int i,string p):Person(n,a)
    {
        sid=i;
        program=p;
    }

    void displayS()
    {
        displayP();
        cout<<"ID:"<<sid<<" Prog:"<<program<<endl;
    }
};

class Graduate:public Student
{
private:
    string research;
    string supervisor;
public:
    Graduate(string n,int a,int i,string p,string r,string s):Student(n,a,i,p)
    {
        research=r;
        supervisor=s;
    }

    void displayG()
    {
        displayS();
        cout<<"Topic:"<<research<<" Sup:"<<supervisor<<endl;
    }
};

int main()
{
    Graduate g1("Qasim",25,1001,"CS","AI","Sir.Qasim");
    g1.displayG();
    return 0;
}