#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    
    int n = 0;
    int m = n;
    int mask = 0;
    int ans = 0;
    while(m!=0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    ans = (~n) & mask;
    return ans;
}