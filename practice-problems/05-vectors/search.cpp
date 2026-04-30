/* TODO: write a function which takes a vector of integers V and an integer x
 * and returns a boolean indicating whether or not x was found in the elements
 * of V. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

bool vCheck(vector<int>& V, int x){

	bool search = false;

	for ( size_t i =0; i < V.size(); i++ ){
		if(V[i] == x) {
			search = true;
		}

	}

	return search;


}

int main()
{
	int x;
	vector<int> V;
	while(cin >> x){
		V.push_back(x);
	}

	cout << vCheck(V,5) << "\n";

	/* TODO: call your function, make sure it works... */
	return 0;
}

// vim:foldlevel=2
