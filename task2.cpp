#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string name;
    int ag;
public:
    void inputP()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Age:";
        cin>>ag;
    }
    void displayP()
    {
        cout<<"Name:"<<name<<" Age:"<<ag<<endl;
    }
};
class PublicStu:public Person
{
public:
    void showData()
    {
        displayP();
    }
};
class ProtectedStu:protected Person
{
public:
    void process()
    {
        inputP();
        displayP();
    }
};
class PrivateStu:private Person
{
public:
    void execute()
    {
        inputP();
        displayP();
    }
};
int main()
{
    PublicStu s1;
    s1.inputP();
    s1.showData();
    cout<<"\n";
    ProtectedStu s2;
    s2.process();
    cout<<"\n";
    PrivateStu s3;
    s3.execute();
    return 0;
}