#include<iostream>
using namespace std;

int main(){
    int n;
    cout << endl << "Enter a number -> ";
    cin >> n;
    
    int prod = 1;
    int sum = 0;
    while(n!=0){
        int dig = n%10;
        prod = prod * dig;
        sum = sum + dig;
        n = n/10;
    }
    int answer = prod - sum;
    return answer;
}