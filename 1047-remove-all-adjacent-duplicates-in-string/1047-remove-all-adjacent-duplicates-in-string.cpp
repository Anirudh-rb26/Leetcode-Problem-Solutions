class Solution {
public:
    string removeDuplicates(string str)
    {
        string result = "";
        
        for(auto ch: str)
            if(ch == result.back())
                result.pop_back();
            else result += ch;
        
        return result;
    }
};