//BRUTE FORCE -> 2 for loops Time complexity - O(n^2), Space - O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;//deep copy
        for(int i = 0; i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        std::sort(v.begin(),v.end());
        int i  = 0;
        int j = nums.size()-1;
        while(i<j){
            long curr = long(v[i].first+v[j].first);
            if(curr==target){
                if(v[i].second<v[j].second)
                    return {v[i].second,v[j].second};
                return {v[j].second,v[i].second};
            }
            if(curr<target)
                i++;
            else
                j--;
        }  
 
    }


};
 