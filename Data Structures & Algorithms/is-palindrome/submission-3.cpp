//O(n) runtime and O(1) space
class Solution {
public:
    bool isPalindrome(string s) {
        //2 indexes - (for loop?)
        if(s.length()==0 || s.length()==1) return true;
        int i1 = 0;
        int i2 = s.length()-1;
        while(i1<i2){
            while(i1<i2 && !isalnum(s[i1])) i1++;
            while(i1<i2 && !isalnum(s[i2])) i2--;
            if(tolower(s[i1]) != tolower(s[i2])){
                return false;
            }
            i1++;
            i2--;
        }
        return true;
    }
    
};
