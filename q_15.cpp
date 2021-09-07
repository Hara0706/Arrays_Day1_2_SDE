// find majority element
// brute force approach taking each element takes O(N^2)
// optimal approach is to use a hash map to store frequency of elements
// this takes time O(n log n)
// Moore volting algo removes O(N) extra space taken

class Solution
{
    public:
    int major(vector<int> &nums)
    {
        int cnt = 0, cand = 0;
        for(int i: nums)
        {
            if(cnt == 0)
            cand = i;
            
            if(i==cand) cnt++;
            else cnt--;
        }
        
        return cand;
    }
    
    
    
};
