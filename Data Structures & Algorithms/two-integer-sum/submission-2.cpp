class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int dif=0;
        
        for(int i=0;i<nums.size();i++){
            dif= target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==dif){
                    return {i,j};
                }
            }
        }
        return {-1};
    }
};
