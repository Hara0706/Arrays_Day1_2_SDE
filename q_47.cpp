// allocate books one to each in contiguous order
// using recursion or dp ends up in time O(N^2)


class Solution
{
    public:
    bool isPossible(int arr[], int n, int m, int cur_min)
    {
        int st = 1;
        int cur_sum = 0;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]> cur_min)
            return false;
            
            if(cur_sum+arr[i] > cur_min)
            {
                st++;
                cur_sum = arr[i];
                
                if(st>m)
                return false;
            }
            
            else
            cur_sum += arr[i];
        }
        
        return true;
    }
    
    
    int findPages(int arr[], int n, int m)
    {
        long long sum = 0;
        if(n<m) return -1;
        
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
        }
        
        int start = 0, end = sum;
        int res = INT_MAX;
        
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(isPossible(arr, n, m, mid)
            {
                res = mid;
                end = mid - 1;
            }
            else
            start = mid+1;
        }
        
        return res;
    }
};
