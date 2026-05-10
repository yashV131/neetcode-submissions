#include <map>
class Solution {
//O(n) space, O(n) time
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<char, int> s_elements;
        map<char, int> t_elements;
        for(int i = 0;i<s.size();i++){
            char c = s[i]; // b
            char c2 = t[i]; //c
            if(s_elements.find(c) == s_elements.end()){
                s_elements[c] = 1;
            }
            else{
                
                s_elements[c]+=1;
            }
            if(t_elements.find(c2) == t_elements.end()){
                t_elements[c2] = 1;
            }
            else{
                
                t_elements[c2]+=1;
            }
        }

        for(const auto pair:s_elements){
            int t_value = t_elements[pair.first];
            if(pair.second != t_value){
                return false;
            }
        }
        return true;
    }
};
