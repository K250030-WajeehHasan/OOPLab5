#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    int eid;
    string name;
    float salary;
public:
    void input()
    {
        cout<<"ID:";
        cin>>eid;
        cout<<"Name:";
        cin>>name;
        cout<<"Salary:";
        cin>>salary;
    }
    void display()
    {
        cout<<"ID:"<<eid<<" Name:"<<name<<" Salary:"<<salary<<endl;
    }
};
class Manager:public Employee
{
private:
    string department;
    float extra;
public:
    void inputMgr()
    {
        input();
        cout<<"Dept:";
        cin>>department;
        cout<<"Bonus:";
        cin>>extra;
    }
    void displayMgr()
    {
        display();
        cout<<"Dept:"<<department<<" Bonus:"<<extra<<endl;
    }
};
int main()
{
    Manager m1;
    m1.inputMgr();
    cout<<"\nDetails:\n";
    m1.displayMgr();
    return 0;
}