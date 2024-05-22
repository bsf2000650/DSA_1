#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,9};
    int size = 10;

    int ans = 0; 
    // XORing all elements
    for(int i=0; i<arr.size();i++)
        ans = ans^arr[i];
    
    for(int i=1; i<arr.size();i++)
        ans = ans * i;
    
    return ans;
}