// rotate matrix
// brute force is to copy elements as required in another matrix
// takes time O(N^2) and space of O(N^2)
// optimal solution is to transpose and then reverse the matrix rows
// this takes space O(1) and time 2*O(N^2)

class Solution
{
  public:
  void rotate(vector<vector<int>> &m) // m is the vector of columns
  {
      int n = m.size();
      
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<i; i++)
        {
            swap(m[i][j], m[j][i]);
        }
      }
      
      for(int i=0; i<n; i++)
      {
          reverse(m[i].begin(), m[i].end());
      }
  }
 
};
