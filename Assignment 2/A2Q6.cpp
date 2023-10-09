#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "The first 5 prime numbers are:"<<endl;

    for(int i = 2; i <= 13; ++i) 
    {
        int Num_prime = 0; 

        for(int j = 2; j <= sqrt(i); ++j) 
        {
            if(i % j == 0)
            {
                Num_prime = 1; 
                
            }
        }

        if(Num_prime == 0) 
        {
            cout << i << " ";
        }
    }
    
    return 0;
}