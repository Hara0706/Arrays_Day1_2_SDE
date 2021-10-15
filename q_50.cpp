// longest increasing subsequence
// it may go exponential reduce to linear quadratic
// time is O(N^2) and space is O(N)

class Solution
{
    public:
    int lis( int arr[], int n ) 
 { 
	int lis[n]; 

	lis[0] = 1; 

	
	for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
		{
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
			lis[i] = lis[j] + 1; 
		}	
	} 

	return *max_element(lis, lis+n); 
  } 
	
    
    
};
