/* TODO: write a function which takes a vector of integers V and an
 * integer d and returns another vector containing only the elements
 * of V which are divisible by d.  ("x is divisible by d" means that
 * there exists another integer q such that x == dq.  That is, when
 * you divide x by d, there's no remainder.) */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

 vector<int> divisible(vector<int>& V, int d){

	vector<int> X;
	for(size_t i=0; i< V.size(); i++){
		if (V[i]%d == 0){
			X.push_back(V[i]);
		}
	}

	return X;

}




int main()
{
	int x;
	vector<int> V;
	while (cin >> x){
		V.push_back(x);
	}

	vector<int> result = divisible(V,2);
	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}

	return 0;
}

// vim:foldlevel=2
