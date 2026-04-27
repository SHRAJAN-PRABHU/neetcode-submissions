class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        sort(a.begin(),a.end());
        if(a.empty()) return 0;
        int count=1;
        int longest=0;
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]==a[i])continue;
            else if(a[i+1]-a[i]==1){
                count++;
            }
            else{
                longest=max(count,longest);
                count=1;
            }

        }
        longest=max(count,longest);

        return longest;
    }
};
