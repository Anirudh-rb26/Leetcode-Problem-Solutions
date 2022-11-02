class Solution {
public:
    bool isPalindrome(int x) {
        
        long lastdigit, reversednumber = 0, temporary = x;
        
        while (temporary > 0)
        {
            lastdigit = temporary % 10;
            reversednumber = (reversednumber * 10) + lastdigit;
            temporary /= 10;
        }
        
        if (reversednumber == x) return 1;
        else return 0;
        
    }
};