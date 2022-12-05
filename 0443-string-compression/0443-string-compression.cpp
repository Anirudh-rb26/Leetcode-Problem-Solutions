class Solution {
public:
    int compress(vector<char>& chars)
    {
        int i = 0, answerIndex = 0, size = chars.size();
        
        while(i < size)
        {
            int j = i + 1;
            
            while(j < size and chars[i] == chars[j])
                j++;
            
            chars[answerIndex++] = chars[i];
            int count = j - i;
            
            if(count > 1)
            {
                string cnt = to_string(count);
                for(char ch: cnt)
                    chars[answerIndex++] = ch;
            }
            
            i = j;
        }
        
        return answerIndex;
    }
};