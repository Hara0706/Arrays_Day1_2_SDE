// sort a stack 
// time and space O(N)
// use a temporary stack


class Solution{
    
    public:
    
    stack<int> Sort(stack<int> &s)
    {
       stack<int> st;
       
       while(!s.empty())
       {
           int temp = s.top();
           s.pop();
           
           while(!st.empty() && st.top()>temp)
           {
               s.push(st.top());
               st.pop();
           }
           
           st.push(temp);
       }
       
       return st;
        
    }
    
};
