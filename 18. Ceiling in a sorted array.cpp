// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

/* Function to get index of ceiling of x in arr[low..high] */
int ceilSearch(int arr[], int low, int high, int x){
  int i;
  
  if(x <= arr[low]) return arr[low];
  
  for(i = low; i < high; i++){
    if(arr[i] == x) return i;
    
    if(arr[i] < x && arr[i+1] >= x) return i+1;
  }
  
  return -1;
  
}

/* Driver code*/
int main() 
{ 
	int arr[] = {1, 2, 8, 10, 10, 12, 19}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int x = 9; 
	int index = ceilSearch(arr, 0, n-1, x);
  	if(index == -1) cout << "ceiling of " << x << " doesn't exists in array\n";
  	else cout << "ceiling of " << x << " is " << arr[index];
	return 0; 
} 

// This is code is contributed by rathbhupendra
