/* TODO: write a function which takes a *sorted* vector of integers V
 * and an integer x and performs a *binary search* for x.  The idea is
 * that since the vector is sorted, you can look at the middle element
 * and then rule out half of the vector from the search.  Just keep on
 * doing that until you find x or you run out of places to look. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

bool search(const vector<int>& V, int x){
	int low = 0;
	int high = V.size() -1;

	while (low <= high){
		int mid = (low +high)/2;
	if(V[mid]== x) return true;

	if(V[mid] < x) high = mid +1;

	if (V[mid] > x) low = mid -1;

	}

	return -1;




}

int main()
{

	vector<int> V = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	cout << search(V, 8) << "\n";


	/* TODO: call your function, make sure it works... */
	return 0;
}

// vim:foldlevel=2
