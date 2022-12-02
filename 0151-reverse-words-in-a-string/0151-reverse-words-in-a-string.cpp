class Solution
{
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
                
                if(temp == "" or temp == " ") continue;
                
                words.push_back(temp);
            }
            
            string reversedString = words[0];
            
            for(int word = 1; word < words.size(); word++)
                reversedString = words[word] + " " + reversedString;
            
            return reversedString;
        }
};