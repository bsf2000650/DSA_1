#include<iostream>
#include<limits.h>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = 9;

    cout << "Before reverse -> ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    reverseArray(arr,size);

    cout << endl << "After reverse -> ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
}