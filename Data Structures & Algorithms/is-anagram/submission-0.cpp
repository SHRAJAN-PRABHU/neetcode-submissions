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
};

