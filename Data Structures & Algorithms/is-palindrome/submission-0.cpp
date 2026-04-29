class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        int start = 0;
        int end = len-1;
    
        while(start<end){
            while(start<end && !((s[start]>='A' && s[start]<='Z') || (s[start]<='z' && s[start]>='a') || (s[start]>='0' && s[start]<='9'))){
                start++;
            }
            while(end>start && !((s[end]>='A' && s[end]<='Z') || (s[end]<='z' && s[end]>='a') || (s[end]>='0' && s[end]<='9'))){
                end--;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};
