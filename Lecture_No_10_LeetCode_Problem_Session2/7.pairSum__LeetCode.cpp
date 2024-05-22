#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    int arr1[5] = {1,1,2,3,4};
    
    int target = 3;

    vector<vector<int> >  ans;
    
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr1[i] + arr1[j] == target){
                vector<int> temp;
                temp.push_back(min(arr1[i],arr1[j]));
                temp.push_back(max(arr1[i],arr1[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());

    return ans;
}