#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    int arr1[5] = {1,1,2,3,4};
    int arr2[5] = {1,2,3,4,5};


    vector<int> ans;
    int element = 0;

    for(int i=0; i<5; i++){
        element = arr1[i];
        for(int j=0; j<5; j++){
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    
    for(int i=0; i<5; i++){
        cout << ans[i] << " ";
    }

    cout << endl;
}