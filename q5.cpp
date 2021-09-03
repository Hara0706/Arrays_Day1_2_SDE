// merge interval pairs in array
// first is brute force approch for unsorted array 
// iterate over each interval to check the mergings and store in another data structure
// it takes time O(n log n) + O(N^2)

// in next approach need to sort all the intervals and then merge the intervals
// it takes time O(n log n) + O(N) and space O(N) at worst case

class Solution
{
    public:
    vector<vector<int>> merge( vector<vector<int>> &vp)
    {
         vector<vector<int>> mvp;   // result merged interval vector
         
         if(vp.size() == 0) 
         return mvp;
         
         sort(vp.begin(), vp.end());
         vector<int> temp = vp[0];
         
         for(auto it: vp)          // to check if the ending point of one interval is larger than other
         {
             if(it[0] <= temp[1] )
             {
                 temp[1] = max(it[1], temp[1]);
             }
             else
             {
                 mvp.push_back(temp);
                 temp = it;
             }
         }
         
         mvp.push_back(temp);
         return mvp;
    }
    
};
