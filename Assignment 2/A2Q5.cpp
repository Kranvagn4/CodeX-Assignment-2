#include <iostream>
using namespace std;
int main(){
    int pw;
    int i =0;
    int n;
    cout<<"Enter password: "<<endl;
    cin>>pw;
    cout<<"Enter the value of the password: "<<endl;
    cin>>n;
    do{
        cout<<i<<endl;
        i++;
    }while(i!=n);
    if(pw==i){
        cout<<"Password is correct"<<endl;
    }

    else{
        cout<<"The password is wrong."<<endl;
    }
    return 0;
}   