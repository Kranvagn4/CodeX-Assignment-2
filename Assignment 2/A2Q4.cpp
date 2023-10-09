#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age of the person:"<<endl;
    cin>>age;
    if(age<13){
        cout<<"The person is a child."<<endl;
    }
    else if(age>=13, age<19){
        cout<<"The person is a teenager."<<endl;
        }
    else if(age>=19, age<60){
        cout<<"The person is an adult."<<endl;
    }
    else{
        cout<<"The person is a senior."<<endl;
    }
    return 0;
}
