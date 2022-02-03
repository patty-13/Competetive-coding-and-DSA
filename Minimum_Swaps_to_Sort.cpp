// 16. Minimum Swaps to Sort 
// Medium Accuracy: 50.0% Submissions: 76142 Points: 4
// Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.


// Example 1:

// Input:
// nums = {2, 8, 5, 4}
// Output:
// 1
// Explaination:
// swap 8 with 4.
// Example 2:

// Input:
// nums = {10, 19, 6, 3, 5}
// Output:
// 2
// Explaination:
// swap 10 with 3 and swap 19 with 5.

// Your Task:
// You do not need to read input or print anything. Your task is to complete the function minSwaps() which takes the nums as input parameter and returns an integer denoting the minimum number of swaps required to sort the array. If the array is already sorted, return 0. 


// Expected Time Complexity: O(nlogn)
// Expected Auxiliary Space: O(n)


// Constraints:
// 1 ≤ n ≤ 105
// 1 ≤ numsi ≤ 106


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&arr)
	{
	    
	    // Taking the size of the array 
	    int N = arr.size();
	    
	    // Creating a parin to store the index of the vector's elements 
	    pair<int, int> arrPos[N]; 
        for (int i = 0; i < N; i++) {
            arrPos[i].first = arr[i];   arrPos[i].second = i; 
        }
        
        // Sorting the vector created
        sort(arrPos, arrPos + N); 
        
        // Mainting a visited array
        vector<bool> visited(N, false); 
        int ans = 0;
    
        // If you have visited the element in the array then continue
        // If not visited then you increase the cycle size
        // If the cycle continues then the swaps increase
        for(int i = 0; i < N; i++){
            if (visited[i] == true || arrPos[i].second == i)continue;
            
            int cycle_size = 0; int j = i; 
            while (!visited[j]) { 
                visited[j] = 1; j = arrPos[j].second; cycle_size++; 
            } 
            
            if (cycle_size > 0) ans += (cycle_size - 1); 
        }
        
        return ans;
	}
};

