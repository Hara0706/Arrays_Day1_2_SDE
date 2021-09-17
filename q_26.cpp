// four sum problem
// return all unique quadruplets
// first approach is to sort array then use 3 pointer and binary search
// then use hash set to get unique answers
// it takes O(N^3 log N) time
// optimized takes O(N^2)

class Solution
{
    public:
    vector<vector<int>> fourSum(vector<int> num, int target)
    {
        vector<vector<int>> res;
        if(num.empty())
        return res;
        
        int n = num.size();
        sort(num.begin(), num.end());
        
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int t = target - num[j] - num[i];
                int front = j+1;
                int back = n-1;
                
                while(front<back)
                {
                    int two_sum = num[front] + num[back];
                    
                    if(two_sum < t)front++;
                    else if(two_sum > t) back--;
                    else
                    {
                        vector<int> q(4,0);
                        q[0]=num[i];
                        q[1]=num[j];
                        q[2]=num[front];
                        q[3]=num[back];
                        
                        res.push_back(q);
                        
                        while(front<back && num[front]==q[2]) ++front;
                        while(front<back && num[back]==q[3]) --back;
                    }
                }
                
                while(j+1<n && num[j+1]==num[j]) ++j;
            }
            
            while(i+1<n && num[i+1]num[i]) ++i;
        }
        
        return res;
    }
    
};
