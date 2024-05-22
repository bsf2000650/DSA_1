#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int num[], int size){
    int max = INT_MIN;
    for(int i=0; i<size;i++){
        if(num[i] > max)
            max = num[i];
    }
    return max;
}

int getMin(int num[], int size){
    int min = INT_MAX;
    for(int i=0; i<size;i++){
        if(num[i] < min)
            min = num[i];
    }
    return min;
}

int main(){

    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    int size = 10;

    cout << "Max -> " << getMax(num,10) << endl;
    cout << "Min -> " << getMin(num,10) << endl;


}