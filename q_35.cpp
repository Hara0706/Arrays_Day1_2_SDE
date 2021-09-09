// balanced parantheses
// push the start brackets
// if top opposite of corresponding bracket pop
// continue till string is empty
// time O(n) and space O(n)
 
class Solution
{
    public:
    bool isBalanced(string s)
    {
        stack<char> st;
        char x;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '[' || s[i] == '{' || s[i] == '(')
            {
                st.push(s[i]);
                continue;
            }
           
            if(st.empty())
            return false;
            
            switch(s[i])
            {
                case ')':
                x = st.top();
                st.pop();
                if(x=='[' || x=='{')
                return false;
                break;
                
                case '}':
                x = st.top();
                st.pop();
                if(x=='[' || x=='(')
                return false;
                break;
                
                case ']':
                x = st.top();
                st.pop();
                if(x=='{' || x=='(')
                return false;
                break;
            }
        }
        
        return (st.empty());
    }
    
};



