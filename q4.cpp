// maximum subarray sum
// Kadane's algorithm is used 
// iterate for 3 loops and find the subarray sums takes O(N^3) time
// optimized approach can solve it in O(N) time

class Solution
{
    public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = INT_MAX;
        for(auto it: nums)
        {
            sum+=it;
            maxi = max(sum, maxi);
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};
