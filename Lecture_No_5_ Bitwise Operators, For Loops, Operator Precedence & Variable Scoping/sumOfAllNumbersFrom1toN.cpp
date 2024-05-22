#include<iostream>
using namespace std;

int main(){
    int n;
    cout << endl << "Enter a number -> ";
    cin >> n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        // sum = sum + i;
        sum +=1;
    }
    cout << endl << "Sum -> " << sum << endl;
}