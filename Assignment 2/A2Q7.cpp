#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<=20; i++){
        if (i%2==0){
            if(i==10){
                continue;
            }
            cout<<i<<endl;
            i++;
        }
    }
    return 0;
}