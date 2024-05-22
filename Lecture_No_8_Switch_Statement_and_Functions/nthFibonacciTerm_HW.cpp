#include<iostream>
using namespace std;

int ntFibonacciTerm(int n){
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm = 0;

    if(n==1)
        return 0;
    
    if(n==2)
        return 1;
    
    cout << firstTerm << " ";
    cout << secondTerm << " ";

    for(int i=3; i<=n; i++){

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        cout << nextTerm << " ";
    }

    return nextTerm;
}

int main(){

    int n;
    cout << "Enter n -> ";
    cin >> n;
    
    int ans = ntFibonacciTerm(n);
    cout << endl << ans << endl;
    
}