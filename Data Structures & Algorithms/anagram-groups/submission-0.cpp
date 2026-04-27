class Solution {
public:

     bool isAnagram(string s, string t) {
        map<char,int> mp;
        
         bool res=true;
        for(char c: s){
            mp[c]++;
        }
        
        for(char c: t){
            mp[c]--;
        }

        for(auto it : mp){
            if(it.second!=0){
                return false;
            }
        }
    return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<bool> visited(strs.size(),false);
        vector<vector<string>> res;
        for(int i=0;i<strs.size();i++){
            if(visited[i]) continue;
            vector<string> temp;
            visited[i]=1;
            temp.push_back(strs[i]);
            for(int j=i+1;j<strs.size();j++){
                if(isAnagram(strs[i],strs[j])){
                    temp.push_back(strs[j]);
                    visited[j]=1;
                }
            }
            res.push_back(temp);
        }

    return res;
    }
};
