// calculate power of x, n
// first approach is to use loop 
// when power is even x*x  n/=2 
// when power is odd ans*x  n-=1
// when n is 0 then stop
// time is O(log n)

class Solution
{
    public:
    
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long no = n;
        
        if(no<0)
        no = -1*no;
        
        while(no>0)
        {
            if(no%2 == 1)
            {
                ans*=x;
                no-=1;
            }
            else
            {
                x*=x;
                no/=2;
            }
        }
        
        if(no<0)
        ans = (double)(1.0) * (double)(ans);
        
        return ans;
    }
    
};
