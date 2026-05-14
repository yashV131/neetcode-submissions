//O(n) space and O(n log n) time since an ordered set is being used
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        std::set<int> sortedvals;
        for(int i = 0;i<nums.size();i++){
            if(sortedvals.count(nums.at(i)) == 0)
                sortedvals.insert(nums.at(i));
        }
        int prev = *sortedvals.begin();
        int max = 1;
        int curr_max = 1;
        for(int x:sortedvals){
            if(x==prev)
                continue;
            if(abs(x-prev) == 1)
                curr_max +=1;
            if(abs(x-prev)>1){
                if(max<curr_max)
                    max = curr_max;
                curr_max = 1;
            }
            prev = x;
        }
        //Remember!!! If all were sorted - edge case
        if(max<curr_max)
            max = curr_max;
        return max;
        
    }
};
