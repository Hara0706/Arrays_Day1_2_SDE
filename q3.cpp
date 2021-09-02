// merging two sorted arrays
// first approach pluck all their elements into a third array time and space O(N)
// second is to use insertion sort
// next is traversing over arrays and swap the elements to required position takes time O(NM)

// optimal is the GAP method uses time O(n log n) and space O(1)
// use gap operations size/2 until reach 1 and keep sorting by swaps

class Solution
{
    public:
    
    int nextGap(int gap)
    {
        if (gap <= 1)
        return 0;
        return (gap / 2) + (gap % 2);
    }
    
    void merge(int arr1[], int arr2[], int n, int m)
    {
        int i, j, gap = n + m;
        for(gap = nextGap(gap); gap > 0; gap = nextGap(gap))
        {
            for(i=0; i+gap<n; i++)
            {
                if(arr1[i]>arr1[i+gap])
                swap(arr1[i], arr1[i+gap]);
            }
            
            for(j = gap>n? gap-n:0; i<n && j<m; i++, j++)
            {
                if(arr1[i]>arr2[j])
                swap(arr1[i], arr2[j]);
            }
            
            if(j<m)
            {
                 for (j = 0; j + gap < m; j++)
                 {
                    if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j+gap]);
                 }
            }
        }
    }
};
