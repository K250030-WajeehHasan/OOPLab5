#include<iostream>
#include<string>
using namespace std;

class Device
{
protected:
    string name;
    string brand;
public:
    void inputD()
    {
        cout<<"Device:";
        cin>>name;
        cout<<"Brand:";
        cin>>brand;
    }
};
class Connection
{
protected:
    bool w;
    bool b;
public:
    void inputC()
    {
        cout<<"WiFi(1/0):";
        cin>>w;
        cout<<"BT(1/0):";
        cin>>b;
    }
};
class SmartWatch:public Device,public Connection
{
private:
    int rate;
    int st;
public:
    void inputW()
    {
        inputD();
        inputC();
        cout<<"HeartRate:";
        cin>>rate;
        cout<<"Steps:";
        cin>>st;
    }
    void displayW()
    {
        cout<<"Device:"<<name<<" Brand:"<<brand<<endl;
        cout<<"WiFi:"<<w<<" BT:"<<b<<endl;
        cout<<"HR:"<<rate<<" Steps:"<<st<<endl;
    }
};
int main()
{
    SmartWatch w1;
    w1.inputW();
    cout<<"\nData:\n";
    w1.displayW();
    return 0;
}