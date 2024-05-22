#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){

    int answer = factorial(n) / (factorial(r) * factorial(n-r));

    return answer;

}

int main(){

    int n, r;
    cout << "Enter n -> ";
    cin >> n;
    cout << endl << "Enter r -> "; 
    cin >> r;

    int ncr = nCr(n,r);
    cout << endl << ncr; 
    
}