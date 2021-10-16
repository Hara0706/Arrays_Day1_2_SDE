// 0-1 knapsack problem
// to get maximum profit

class Solution
{
    public:
    int knapsack(int ind, int w, int val[], int wt[], int n)
    {
        if(ind>=n)
        return 0;
        
        if(w==0)
        return 0;
        
        if(wt[ind]<=w)
        {
            int left = val[ind] + knapsack(ind+1, w-wt[ind], val, wt, n);
            int right = knapsack(ind+1, w, val, wt, n);
            
            return max(left, right);
        }
        
        else
        {
            return knapsack(ind+1, w, val, wt, n);
        }
    }
   
    
};
