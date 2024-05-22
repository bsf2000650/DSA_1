class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
       for(int i=0; i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                int element = nums[i];
                if(element == nums[j]){
                    ans.push_back(element);
                    break;
                }
                break;
            }
       }
       return ans; 
    }
};