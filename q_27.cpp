
// longest consecutive number sequence
// to be done in O(N) and space O(N)


class Solution
{
    public:
    int longest(vector<int> &nums)
    {
        set<int> hashSet;
        for(int nu: nums)
        {
            hashSet.insert(nu);
        }
        
        int longestStreak = 0;
        
        for(int nu: nums)
        {
            if(!hashSet.count(nu-1))
            {
                int curNum = num;
                int curStreak = 1;
                
                while(hashSet.count(curNum+1))
                {
                    curNum += 1;
                    curStreak += 1;
                }
                
                longestStreak = max(longestStreak, curStreak);
            }
        }
        
        return longestStreak;
    }
    
};
