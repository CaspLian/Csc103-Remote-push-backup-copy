/* TODO: write a function which takes a vector of integers V and places
 * the elements in sorted order (that is, i<=j ==> V[i]<=V[j]).
 * NOTE: there is a simple solution in l3.pdf if you get stuck, but it's
 * a pretty good exercise if you work it out yourself. */

#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

size_t smallest(const vector<int>& V, size_t start){
	size_t iMin = start;

	for(size_t i = start+1; i<V.size(); i++)
		if (V[i] < V[iMin]){
			iMin = i;
		}
		return iMin;

}

void sort(vector<int>& V){

	for (size_t i=0; i<V.size() -1; i++){
		std::swap(V[i], V[smallest(V,i)]);
	}
}

int main()
{

	vector<int> V = { 5, 3, 4, 2 ,1 ,7, 8};


	sort(V);


	for(size_t i =0; i < V.size(); i++){
		cout << V[i] << " ";
	}


	/* TODO: call your function, make sure it works... */
	return 0;
}

// vim:foldlevel=2
