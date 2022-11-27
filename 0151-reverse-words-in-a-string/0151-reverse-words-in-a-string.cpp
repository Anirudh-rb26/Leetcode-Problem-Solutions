class Solution {
public:
    string reverseWords(string s)
    {
        int start = 0, size = s.size();
        vector<string> words;
        
        while(start < size)
        {
            string temp = "";
            
            while(start < size and s[start] == ' ') start++;
            while(start < size and s[start] != ' ') temp += s[start++];
            
            if (temp == "" || temp == " ") continue; // for safety if the condition result in true value.
            
            words.push_back(temp);
        }
                            
        string result = words[0];

        for(int i = 1; i < words.size(); i++)
            result = words[i] + " " + result;
        
        return result;
    }
};