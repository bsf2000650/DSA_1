#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,1,2,2,3};
    int size = 5;

    int ans = 0;

    for(int i=0; i<size;i++)
        ans = ans ^ arr[i];
        
    
    cout << "Answer -> " << ans;
}