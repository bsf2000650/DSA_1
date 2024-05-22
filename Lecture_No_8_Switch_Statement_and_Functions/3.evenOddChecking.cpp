#include<iostream>
#include<limits.h>
using namespace std;

bool isEven(int n){
    // if(n%2 == 0)
    //     return true;
    
    // return false;

    if(n&1)
        return false;
    
    return true;
}

int main(){
    int n;
    cout << "Enter n -> ";
    cin >> n;
    
    if(isEven(n)){
        cout << endl << n << " is even number" << endl;
    }else{
        cout << endl << n << " is odd number" << endl;
    }
    
}