// next permutation
// brute force approach takes O(N!*N) time 
// in built next_permutation

// optimized algo takes O(N) time
// traverse from back and find the first index where a[i]<a[i+1]
// traverse from back and find the index that is greater than a[i]
// swap them
// now from a[i+1] to a[n-1] reverse everything
// if there is no break point just reverse the number

class Solution
{
    public:
    void nextPermutation(int a[])
    {
        if(a == null || a.length()<=1)
        return;
        
        int i = a.length()-2;
        while(i>=0 && a[i]>=a[i+1]) i--;
        
        if(i>=0)
        {
            int j = a.length()-1;
            while(a[j]<=a[i]) j--;
            swap(a[j], a[i]);
        }
        
        reverse(a+i+1, a+n);
    }
   
};
