//redo practice
//O(n) time and O(n) space
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> vals;
        for(int i = 0; i<nums.size();i++){
            if(vals.find(nums.at(i)) != vals.end())
                return true;
            vals.insert(nums.at(i));
        }
        return false;
    }
};