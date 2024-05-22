#include<iostream>
#include<limits.h>
using namespace std;

void sort01(int arr[], int n){

    int left = 0, right = n-1;

    while(left < right){

        while(arr[left] == 0 && left < right)
            left++;
        
        while(arr[right] == 1 && left < right)
            right--;
        
        if(left < right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int even[6] = {0,1,0,1,0,1};

    int odd[5] = {0,1,0,1,0};

    sort01(even,6);
    sort01(odd,5);

    printArray(even,6);
    cout << endl;
    printArray(odd,5);

}