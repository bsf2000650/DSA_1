#include<iostream>
using namespace std;

int main(){
    int n;
    cout << endl << "Enter a number -> ";
    cin >> n;
    int nextNumber = 0;
    int a = 0; 
    int b = 1;
    cout << a << " " << b << " ";
    for(int i=3; i<=n; i++){
        nextNumber = a+b;
        a = b;
        b = nextNumber;
        cout << nextNumber << " ";
    }
    cout << endl << "Nth Number -> " << nextNumber << endl;
}