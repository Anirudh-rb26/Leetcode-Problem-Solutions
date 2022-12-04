class Solution {
public:
    
    bool isPalindrome(string str, int start, int end)
    {
        while(start <= end)
            if(str[start] == str[end])
            {
                start++;
                end--;
            }
            else
                return false;
        return true;
    }
    
    
    bool validPalindrome(string str)
    {
        int start = 0, end = str.size() - 1;
        
        while(start <= end)
            if(str[start] == str[end])
            {
                start++;
                end--;
            }
            else
                return isPalindrome(str, start + 1, end) or isPalindrome(str, start, end - 1);
        
        return true;
    }
};