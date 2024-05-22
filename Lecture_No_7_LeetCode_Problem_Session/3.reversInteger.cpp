#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n -> ";
    cin >> n;
    int ans = 0;
  
    while(n!=0){
        int digit = n%10;
        ans = (ans*10) + digit;
        if((ans > INT_MAX/10) || (ans < INT_MIN/10))
            return 0;
        n = n/10;
    }
    return ans;
    
}