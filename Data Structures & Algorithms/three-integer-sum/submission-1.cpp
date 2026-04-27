class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        int target=0;
        int i=0,j=0,k=0;
        vector<vector<int>> res;
        for(int i=0;i<a.size();i++){
            if(i>0 && a[i]==a[i-1]) continue;
            j=i+1;
            k=a.size()-1;
            target= -a[i]; 
            while(j<k){
                if(a[j]+a[k]==target){
                    res.push_back({a[i],a[j],a[k]});
                    j++;
                    k--;
                    while(j < k && a[j] == a[j-1]) j++;
                    while(j < k && a[k] == a[k+1]) k--;
                }
                else if(a[j]+a[k]<target) j++;
                else k--;
            }
            
        }
        return res;
        
    }
};
