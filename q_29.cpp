// count subarrays with xor equal to m
// time is O(N log N) and space is o(N)

class Solution
{
    public:
    int solve(vector<int> &a, int b)
    {
        map<int, int> mp;
        int cnt = 0;
        int xori = 0;
        
        for(auto it: a)
        {
            xori = xori^it;
            
            if(xori == b)
            cnt++;
            
            if(mp.find(xori^b) != mp.end())
            cnt += mp[xori^b];
            
            mp[xori]+=1;
        }
        
        return cnt;
    }
    
};
