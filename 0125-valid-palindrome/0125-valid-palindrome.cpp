class Solution {
public:
    bool isPalindrome(string s)
    {
        if(s.size() == 1) return true;
        string newString;
        for(auto ch: s)
            if(isalnum(ch))
                newString.push_back(tolower(ch));

        int start = 0, end = newString.size() - 1;

        while(start <= end)
            if(newString[start++] != newString[end--])
                return false;
        
        return true;
    }    
};