// duplicate in array for integers 1 to n+1 
// first approach is to sort and traverse to find consecutive indices having same integer 
// it takes time O(n log n) and extra space O(1)
// next is hashing by creating frequecy array 

// next is the Tortoise method to make fast and slow pointers 
// each time it finds the index present as an element in array and where the pointers meet
// fast pointer moves double of slow pointer 
// time is O(N) and space is O(1)

class Solution
{
    public:
    int find(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];
        
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow!=fast);
        
        fast = nums[0];
        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
    
};
