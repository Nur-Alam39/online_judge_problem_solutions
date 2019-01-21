// C++ program to Count all pair with given XOR
// value x
#include<bits/stdc++.h>
using namespace std;

// Returns count of pairs in arr[0..n-1] with XOR
// value equals to x.
int xorPairCount(int arr[], int n, int x)
{
	int result = 0; // Initialize result

	// create empty set that stores the visiting
	// element of array.
	// Refer below post for details of unordered_set
	// http://www.geeksforgeeks.org/unorderd_set-stl-uses/
	unordered_set<int> s;

	for (int i=0; i<n ; i++)
	{
		// If there exist an element in set s
		// with XOR equals to x^arr[i], that means
		// there exist an element such that the
		// XOR of element with arr[i] is equal to
		// x, then increment count.
		if (s.find(x^arr[i]) != s.end())
			result++;

		// Make element visited
		s.insert(arr[i]);
	}

	// return total count of pairs with XOR equal to x
	return result;
}

// driver program
int main()
{
	int arr[] = {5 , 4 ,10, 15, 7, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 5;
	cout << "Count of pairs : "
		<< xorPairCount(arr, n, x);
	return 0;
}

