#include <iostream>

using namespace std;
class Hafeez //Class Creation
{
public:
    int a,b,c;
    void GetData() //function
    {
        cout<<"Enter first Number";
        cin>>a;
        cout<<"Enter Second Number";
        cin>>b;
    }
    void ShowData() //function
    {
        c = a + b;
        cout<<"Addition of the two number is:"<<c;
    }

};
int main()
{
    Hafeez h; //Object Creation for class
    h.GetData();// Call the GetData function which inside the class through Object
    h.ShowData();//Call the ShowData function which inside the class through Object
}
