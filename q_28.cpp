
// largest subarray with sum 0
// naive approach is to generate subarrays and check
// suppose in 2 parts both have same sum
// then one has the sum and other subpart is 0
// time is O(N log N) and space is O(N)

class Solution
{
    public:
    int maxLen(int a[], int n)
    {
        unordered_map<int, int> mp;
        int maxi = 0;
        int sum = 0;
        
        for(int i=0; i<n; i++)
        {
            sum += a[i];
            if(sum == 0)
            {
                maxi = i+1;
            }
            
            else
            {
                if(mp.find(sum)!= mp.end())
                {
                    maxi = max(maxi, i-mp[sum]);
                }
                else
                {
                    mp[sum] = i;
                }
            }
        }
        
        return maxi;
    }
};
