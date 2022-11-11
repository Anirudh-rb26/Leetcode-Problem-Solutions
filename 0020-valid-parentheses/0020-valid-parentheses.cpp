class Solution {
public:
    bool isValid(string string)
    {
        stack<char> charStack;
        int size = string.size(), index = 0;
        
        if(size == 0)
            return true;
        
        while(index < size)
        {
            if(string[index] == '(' or string[index] == '{' or string[index] == '[')
                charStack.push(string[index]);
            
            else if(string[index] == ')' and !charStack.empty() and charStack.top() == '(' or
                   string[index] == '}' and !charStack.empty() and charStack.top() == '{' or 
                   string[index] == ']' and !charStack.empty() and charStack.top() == '[')
                charStack.pop();
            
            else
                return false;
            
            index++;
        }
        
        if(charStack.empty())
            return true;
        
        return false;
    }
};