#include <set>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        set<int> a(nums.begin(), nums.end());

        int longest = 1;
        int count = 1;

        auto it = a.begin();
        auto prev = it;
        it++;

        for(; it != a.end(); it++){
            if(*it - *prev == 1){
                count++;
            } else {
                longest = max(longest, count);
                count = 1;
            }
            prev = it;
        }

        longest = max(longest, count);

        return longest;
    }
};