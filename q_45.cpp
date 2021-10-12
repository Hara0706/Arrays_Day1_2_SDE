
// find element appear once in sorted array
// naive approach is to find xor 

// find with the help of odd or even index
// time is O(log N) and space is O(1)

class Solution
{
    public:
    int single(vectror<int> &a)
    {
        int low = 0, high = a.size()-2;
        
        while(low<=high)
        {
            int mid = (low+high)>>1;
            
            if(a[mid] == a[mid^1])
            low = mid+1;
            
            else
            high = mid-1;
            
        }
        return a[low];
    }
    
};
