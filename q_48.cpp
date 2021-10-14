// aggressive cows
// largest minimun distance between cows 

class Solution
{
    public:
    bool check(int x)
    {
        int cows = 1, lp = a[0];
        
        for(int i=1; i<n; i++)
        {
            if(a[i]-lp >= x)
            {
                if(++cows == c)
                return true;
                
                lp = a[i];
            }
        }
        
        return false;
    }
    
    
    long long solve(int a[], int n, int c)
    {
        sort(a, a+n);
        
        long long low = 0, high = INT_MAX, mid, pos = 0;
        
        while(high>=low)
        {
            mid = (high+low)/2;
            
            if(check(mid))
            {
                low = mid+1;
                pos = mid;
            }
            else
            {
                high = mid-1;
            }
        }
        
        return pos;
    }
    
};
