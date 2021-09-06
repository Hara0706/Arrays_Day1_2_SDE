// best time to buy and sell stock
// brute force approach time is O(N^2) and space is O(1)
// optimal approach is store min value from left and traverse to find max profit
// time is O(N) and space is O(1)


class Solution
{
  public:
  int maxProfit(vector<int> &prices)
  {
      int max_pro = 0;
      int min_pri = INT_MAX;
      for(int i = 0; i<prices.size(); i++)
      {
          min_pri = min(min_pri, prices[i]);
          max_pro = max(max_pro, prices[i]-min_pri);
      }
      
      return max_pro;
  }
};
