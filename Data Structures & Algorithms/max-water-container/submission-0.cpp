class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        vector<int> vol;
        while(i<j){
            int volume= (j-i)*min(heights[i],heights[j]);
            vol.push_back(volume);
            if(heights[i]<heights[j]){
                i++;
            }
            else j--;
        }
        sort(vol.begin(),vol.end());

        return(vol[vol.size()-1]);
    }
};
