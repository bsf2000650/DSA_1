#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        swap(arr[i], arr[i+1]);
    }
}

int main(){
    
    int arr[5] = {4,2,1,3,1};
    int size = 5;

    // cout << endl << "Before alternate -> ";
    // printArray(arr,size);

    // swapAlternate(arr,size);

    // cout << endl  << "After alternate -> ";
    // printArray(arr,size);
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
        cout << ans << " ";
    }
    cout << endl << ans << endl;

    for(int i=1; i<size; i++){
        ans = ans ^ i;
        cout << ans << " ";
    }

    cout << endl << ans;
     
}