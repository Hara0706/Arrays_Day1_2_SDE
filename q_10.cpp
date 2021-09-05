// count inversions in array
// inversion pair is if a[i] > a[j] && i<j
// brute force approach has time O(N^2) and space is O(1)
// optimal approach uses merge sort technique
// break array to low to mid until they reach to single elements 
// this takes O(N log N) time and space O(N)

class Solution
{
    public:
    int merge(int a[], int temp[]. int l, int mid, int r)
    {
        int i,j,k, cnt = 0;
        i = l;
        j = mid;
        k = l;
        
        while((i<=mid-1) && (j<=r))
        {
            if(a[i]<=a[j])
            temp[k++] = a[i++];
            
            else
            cnt += (mid-i);
        }
        
        while(i<=mid-1)
        {
            temp[k++] = a[i++];
        }
        while(j<=r)
        {
            temp[k++] = a[j++];
        }
        
        for(i=l; i<=r; i++)
        {
            a[i] = temp[i];
        }
        
        return cnt;
        
    }
    
    
    int mergeSort(int a[], int temp[], int l, int r)
    {
        int mid, cnt = 0;
        if(r>l)
        {
            mid = (l+r)/2;
            cnt += mergeSort(a, temp, l, mid);
            cnt += mergeSort(a, temp, mid+1, r);
        }
        
        return cnt;
    }
    
    
   
};
