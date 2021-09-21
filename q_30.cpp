// longest substring without repeat 
// first approach is brute force by using set 
// it takes time O(2N)
// using map takes time O(N) and space O(N)

class Solution
{
    public:
    
    int lenOfSubstring(string s)
    {
        vector<int> mp(256, -1);
        int l=0, r=0;
        int n=s.size();
        
        int len=0;
        while(r<n)
        {
            if(mp[s[r]]!= -1)
            l = max(mp[s[r]]+1, l);
            
            mp[s[r]] = r;
            
            len = max(len, r-l+1);
            r++;
        }
        
        return len;
    }
};
