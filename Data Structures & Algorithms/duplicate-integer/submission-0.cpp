class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        bool res=false;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second >1) res=true;
        }

    return res;
    }
};