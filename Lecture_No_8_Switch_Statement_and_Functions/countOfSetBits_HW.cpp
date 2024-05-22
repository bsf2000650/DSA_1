#include<iostream>
using namespace std;

int countSetBits(int a, int b){
    int count = 0;
    while (a!=0 || b!=0)
    {
        if(a&1)
            count++;
        if(b&1)
            count++;
        a = a >> 1;
        b = b >> 1;
    }
    return count;
    
}

int main(){

    int a,b;
    cout << "Enter a -> ";
    cin >> a;
    cout << "Enter b -> ";
    cin >> b;
    
    int count = countSetBits(a,b);
    cout << endl << count;
    
}