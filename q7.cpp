// set entire row and column of matrix to 0 if there a 0 exists
// first is to use brute force approach to traverse over the rows and columns
// the time is O(nm * n+m)

// other is taking two dummy arrays 
// time O(nm * nm)
// take the dummyarrays within matrix
// time is O(2nm) and space is O(1)

class Solution
{
    public:
    void setZero(vector<vector<int>> &mat)
    {
        int col0 = 1, rows = mat.size(), cols = mat[0].size();
        
        for(int i=0; i<rows; i++)
        {
            if(mat[i][0] == 0) col0 = 0;
            for(int j=1; j<cols; j++)
            {
                if(mat[i][j] == 0) mat[i][0] = mat[0][j] = 0;
            }
        }
        
        for(int i=rows-1; i>=0; i--)
        {
            for(int j=cols-1; j>=0; j++)
            {
               if(mat[i][0] == 0 || mat[0][j] == 0) mat[i][j] = 0;
            }
            if(col0 == 0) mat[i][0] = 0;
        }
    }
    
};
