// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the nearest even and odd
// perfect squares for even and odd array elements
void nearestPerfectSquare(int arr[], int N)
{

	// Traverse the array
	for (int i = 0; i < N; i++) {

		// Calculate square root of
		// current array element
		int sr = sqrt(arr[i]);

		// If both are of same parity
		if ((sr & 1) == (arr[i] & 1))
			cout << sr * sr << " ";

	// Otherwise
		else {
			sr++;
			cout << sr * sr << " ";
		}
	}
}

// Driver Code
int main()
{
	int arr[] = { 6, 3, 2, 15 };
	int N = sizeof(arr) / sizeof(arr[0]);
	nearestPerfectSquare(arr, N);
	return 0;
}
