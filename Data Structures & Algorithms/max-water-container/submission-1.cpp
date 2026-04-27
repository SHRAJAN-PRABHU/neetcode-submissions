class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxvol=0;
        while(i<j){
            int volume= (j-i)*min(heights[i],heights[j]);
            maxvol=max(maxvol,volume);
            if(heights[i]<heights[j]){
                i++;
            }
            else j--;
        }
        

        return maxvol;
    }
};
