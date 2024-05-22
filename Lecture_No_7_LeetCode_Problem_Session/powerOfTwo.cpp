#include<iostream>
#include<limits.h>
using namespace std;

bool isPowerOfTwo(int n){

    int count = 0;
    while (n!=0)
    {
        if(n&1)
            count++;
        n = n >> 1;
    }

    if(count == 1)
        return true;
    else
        return false;
}

int main(){
    int n;
    cout << "Enter n -> ";
    cin >> n;
    // int ans = 1;
    //     for(int i=0; i<=30; i++){
    //         if(ans == n)
    //             return true;
    //         if(ans < INT_MAX/2)
    //              ans = ans * 2;
    //     }
        
    //     return false;

    if(isPowerOfTwo(n))
        cout << "Power of 2 " << endl;
    else
        cout << "Not Power of 2 " << endl;

    
}