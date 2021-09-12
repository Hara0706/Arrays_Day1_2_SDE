// next greater element
// for each element return the next greater array 
// using loops it takes O(N^2) time
// begin from end iteration
// push element into stack if it has no smaller elements
// top of stack is the next greater element for each
// if there are smaller pop them 
// for circulary make a copy of all array elements and compare together
// time is O(N)and space is O(N)


class Solution{
    
    public:
    
    vector<int> NGE(int a[], int n)
    {
        stack<int> s;
        vector<int> v;
       
        
        for(int i=n-1; i>=0; i--)
        {
            if(!s.empty())
            {
                while(!s.empty() && s.top()<=a[i])
                {
                    s.pop();
                }
            }
            
            if(s.empty())
            v.push_back(-1);
            
            else
            v.push_back(s.top());
            
            s.push(a[i]);
            
        }
        
        return v;
        
        
    }
    
};
