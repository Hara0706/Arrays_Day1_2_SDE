// pascal triangle
// print n rows or nth row
// value at nth row and mth column is (n-1)C(m-1) space O(1)
// computing factorial in O(N) but for every column very costly O(N^2)
// easy compute if(nCm) == n*(n-1)..m times / 1*2..m times
// optimized method takes time O(N) and space O(N)

class Solution
{
    public:
    vector<vector<int>> generate(int numRows)  // no of rows in triangle
    {
        vector<vector<int>> r(numRows);
        
        for(int i=0; i<numRows; i++)
        {
            r[i].resize(i+1);
            r[i][0] = r[i][i] = 1;
            
            for(int j=1; j<i; j++)
            {
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        
        return r;
    }
};
