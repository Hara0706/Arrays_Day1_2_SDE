// search element in matrix
// all elements are in sorted order
// first approach is linear traversal whose time is O(nm)
// next approach is binary search on each row time is O(n log m)

// optimal appproach to use pointers
// if no less than target go down else go left
// binary search using pointer row = i/m col = i%m


class Solution
{
    public:
    bool searchMat(vector<vector<int>> &mat, int target)
    {
        if(mat.size()==0) 
        return false;
        
        int n = mat.size();
        int m = mat[0].size();
        
        int low = 0;
        int high = (m*n)-1;
        
        while(low<=high)
        {
            int mid = low + (low-high)/2;
            
            if(mat[mid/m][mid%m] == target)
            return true;
            
            else if(mat[mid/m][mid%m]< target)
            low = mid+1;
            
            else
            high = mid-1;
            
        }
        
        return false;
    }
};
