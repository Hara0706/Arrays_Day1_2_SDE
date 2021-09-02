// sort array of 0,1,2 
// sorting simply takes O(n log n) time
// optimizing is counting 0s, 1s and 2s takes O(2N) time
// most optimized in Dutch Flag Algorithm time O(N) and space O(1)

class Solution
{
    public:
    void sortArray(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                swap(nums[low++], nums[mid++]);
                break;
                
                case 1:
                mid++;
                break;
                
                case 2:
                swap(nums[mid], nums[high--]);
                break;
                
            }
        }
    }
};
