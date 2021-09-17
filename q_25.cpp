// two sum problem
// brute force takes O(N^2)
// optimized approach uses hash table 
// put a[i] into hash table if target-a[i] is absent
// check for presence of required number
// hash table takes O(1) for insert and search, iteration O(N)
// space is O(N)


class Solution
{
    public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(target-nums[i])!=mp.end)
            {
                ans.push_back(target-nums[i]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        
        return ans;
    }
};
