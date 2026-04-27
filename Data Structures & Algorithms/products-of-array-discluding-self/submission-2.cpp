class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int n=nums.size();
            int prefix=1;
            vector<int> res(n,1);
            for(int i=0;i<n;i++){
                res[i]=prefix;
                prefix*=nums[i];
            }

            int suffix=1;
            vector<int> sres(n,1);
            for (int i=n-1;i>=0;i--){
                sres[i]*=suffix;
                suffix*=nums[i];
            }
            vector<int> fres(n,1);
            for (int i=0;i<n;i++){
                fres[i]=res[i]*sres[i];
            }
        return fres;
    }
};
