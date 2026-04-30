/* TODO: write a function which takes a vector of integers V and a target
 * value t and returns true if and only if there are indexes i != j such
 * that V[i]+V[j] == t.  Bonus question: find a way find a way to modify
 * your function so that the caller can also see what values of i,j work
 * in the case where the return value is true.  The challenge is to figure
 * out how to give 3 outputs from a function instead of just one.
 * HINT: maybe think about value vs reference parameters...  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;


bool subsetsum(const vector<int>& X, int t){

	for(size_t i=0; i <X.size()-1; i++){
		for(size_t j= i+1; j < X.size(); j++){
			if (X[i]+ X[j] == t) {
				cout << "indexes i:"<< i <<" and j:" << j << "\n";
				return true;
			}
		}

	}

return false;

}

/* your answer goes here... */

int main()
{
	vector<int> V = {3, 4, 5, 2,1,7};

	cout << subsetsum(V, 9) << "\n";



	/* TODO: call your function, make sure it works... */
	return 0;
}

// vim:foldlevel=2
