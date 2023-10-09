#include <iostream>
using namespace std;
int main(){
    float a;
    int b;
    cout<<"Enter a float value:"<<endl;
    cin>>a;

    b = int(a);
    cout<<"The float value of "<<a<<" is: "<<a<<endl;
    cout<<"The integer value of "<<a<<" is: "<<b<<endl;
    return 0;
}