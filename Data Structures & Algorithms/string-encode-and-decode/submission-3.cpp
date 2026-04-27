class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++){
            res+= to_string(strs[i].size())+ '#'+ strs[i];
            
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> deres;
        string curr;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len= stoi(s.substr(i,j-i));
            deres.push_back(s.substr(j+1,len));
            i=j+len+1;
        }
        return deres;

    }
};
