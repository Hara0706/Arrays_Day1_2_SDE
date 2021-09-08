// grid unique paths
// given m x n matrix can move right and down to reach end point
// brute force approach is recursive
// time and space are exponential as recusrsion uses stack space 

// better is to convert into dynamic programming
// create a hash table n x m and initialize all -1

// optimal approach is combinatorics
// no of directions taken are m+n-2 and paths will be (m+n-2)C(m-1) or (m+n-2)C(n-1)
// time complexity is O(N) and space is O(1)

class Solution
{
    public:
    int uniquePaths(int m, int n)
    {
        int c = m+n-2;
        int r = m-1;
        double res = 1;
        
        for(int i=0; i<=r; i++)
        {
            res = res*(c-r+i)/i;
        }
        
        return (int)res;
    }
};
