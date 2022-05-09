#include <iostream>

using namespace std;
class Hafeez //Class Creation
{
public:
    int a,b,c;
    void getData() //function
    {
        cout<<"Enter first Number";
        cin>>a;
        cout<<"Enter Second Number";
        cin>>b;
    }
    void showData() //function
    {
        c = a + b;
        cout<<"Addition of the two number is:"<<c;
    }

};
int main()
{
    Hafeez h; //Object Creation for class
    h.getData();// Call the GetData function which is inside the class through Object
    h.showData();//Call the ShowData function which is inside the class through Object
}
