// maximum product subarray
// naive approach time is O(N^2)
// time is O(N) and space is O(1)


class Solution
{
    public:
    int maxSubPro(int arr[], int n)
    {
        int max_end = 1, min_end = 1;
        int max_far = 0, flag = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(arr[i] > 0)
            {
                max_end *= arr[i];
                min_end = min(min_end*arr[i], 1);
                flag = 1;
            }
            
            else if(arr[i] == 0)
            {
                max_end = 1;
                min_end = 1;
            }
            
            else
            {
                int temp = max_end;
                max_end = max(min-end*arr[i], 1);
                min_end = temp*arr[i];
            }
            
            if(max_far < max_end)
            {
                max_far = max_end;
            }
        }
        
        if(flag == 0 && max_far == 0)
        {
            return 0;
        }
        
        return max_far;
    }
    
    
};
