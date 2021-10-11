// find nth root of a number

class Solution
{
    public:
    double multiply(double no, int n)
    {
        double ans = 1.0;
        for(int i=1; i<=n; i++)
        {
            ans *= no;
        }
        return ans;
    }
    
    double getNthRoot(int n, int m)
    {
        double low = 1;
        double high = m;
        double eps = 1e-6;
        
        while((high-low) > eps)
        {
            double mid = (low+high)/2.0;
            if(multiply(mid,n)<m)
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        
        cout<<low<<" "<<high<<endl;
        cout<<pow(m, (double)(1.0/(double(n)));
    }
    
};
