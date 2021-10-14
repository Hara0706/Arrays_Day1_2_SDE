// median of two sorted arrays 
// naive solution is to get with data structure

class Solution
{
    public:
    double findMedian(vector<int> &a, vector<int> &b)
    {
        if(b.size()<a.size()) 
        return findMedian(b,a);
        
        int a1 = a.size();
        int b1 = b.size();
        
        int low = 0, high = a1;
        
        while(low<=high)
        {
            int cut1 = (high+low)>>1;
            int cut2 = (a1+b1+1)/2 - cut1;
            
            int l1 = cut1 == 0? INT_MIN:a[cut1-1];
            int l2 = cut2 == 0? INT_MIN:b[cut2-1];
            
            int r1 = cut1 == a1? INT_MAX:a[cut1];
            int r2 = cut2 == b1? INT_MAX:b[cut2];
            
            if(l1<=r2 && l2<=r1)
            {
                if((a1+b1)%2 == 0)
                return (max(l1,l2) + min(r1,r2))/ 2.0;
                else
                return max(l1,l2);
            }
            else if(l1>r2)
            {
                high = cut1-1;
            }
            else
            {
                low = cut+1;
            }
        }
        return 0.0;
    }
    
};
