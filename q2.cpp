// to find a missing number and a number repeating twice in an array
// array has n elements and ranging from 1 to n
// first approach is using frequency array with time O(2N) and space O(N)
/*
   another approach
   using sum and squares
   Let missing be x and repeating be y 
   x - y = n*(n+1)/2  - sum of nos in array
   x^2 - y^2  =  n*(n+1)*(2n+1)/6  - sum of squares of nos in array 
   (x+y)*(x-y) = x^2 - y^2
*/
// optimized approach is using xor time is O(5N) = O(N)


class Solution
{
    public:
    vector<int> getElements(int arr[], int n)
    {
        vector<int> ans;       // vector to push the missing and repeat element
        int xor_no = arr[0];   // to do all nos xor
        int set_bit;           // to find set bit position in xor
        int x = 0;             // missing
        int y = 0;             // repeating
        
        for(int i = 1; i<n; i++)     // xor of all array nos
        {
            xor_no ^= arr[i];
        }
        for(int i = 1; i<=n; i++)    // xor of all nos from 1 to n
        {
            xor_no ^= i;
        }
        
        set_bit = xor_no & ~(xor_no - 1);  // rightmost set bit position
        
        // make two buckets 1--> nos with set bit at that position, 2--> otherwise
        for(int i =0; i<n; i++)
        {
            if(arr[i] & set_bit)
            x ^= arr[i];
            
            else
            y ^= arr[i];
        }
        
        // xor 1 to n elements with either the set bit position or the other 
        for(int i = 1; i<=n; i++)
        {
            if(i & set_bit)
            x ^= i;
            
            else
            y ^= i;
        }
        
        ans.push_back(x);
        ans.push_back(y);
        
        return ans;
    }
   
};
