#include<iostream>
using namespace std;

int APSeriesNthTerm(int n){
    return (3*n) + 7;
}

int main(){

    int n;
    cout << "Enter n -> ";
    cin >> n;
    
    int ans = APSeriesNthTerm(n);
    cout << ans << endl;
    
}