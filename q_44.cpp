// median of row wise sorted matrix 
// nxm is odd 
// naive approach is to use a data structure to store and sort 
// time is O(nm log nm) and space is O(nm)
// a monotonic increasing function is observed

class Solution
{
    public:
    int countSmallMid(vector<int> &row, int mid)
    {
        int l=0, h=row.size()-1;
        while(l<=h)
        {
            int md = (l+h)>>1;
            if(row[md]<=mid) l = md+1;
            else h = md-1;
        }
        return l;
    }
    
    int findMedian(vector<vector<int>> &a)
    {
        int low = 1;
        int high = 1e9;
        int n = a.size();
        int m = a[0].size();
        
        while(low<=high)
        {
            int mid = (low+high)>>1;
            int cnt = 0;
            for(int i=0; i<n; i++)
            {
                cnt += countSmallMid(a[i], mid);
            }
            
            if(cnt<=(n*m)/2) low = mid+1;
            else high = mid-1;
        }
        
        return low;
    }
      
};
