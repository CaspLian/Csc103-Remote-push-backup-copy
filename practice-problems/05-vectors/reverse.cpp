/* TODO: write a function which takes a vector of integers V (by reference)
 * and reverses its contents.  That is, if V = 1 2 3, then after calling
 * reverse(V), it would contain 3 2 1.  NOTE: the goal is not to print
 * anything, but to rearrange the vector elements in memory. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void reverse(vector<int>& V){
	size_t i=0;
	size_t j= V.size() -1;

while(i <j) {
		int temp = V[i];
		V[i] = V[j];
		V[j] = temp;
		i++;
		j--;
	}

}

int main()
{
	int x;
	vector<int> V;
	while (cin >> x){
		V.push_back(x);
	}
	reverse(V);
	for (size_t i = 0; i < V.size(); i++){
		cout << V[i] << "";
	}


	/* TODO: call your function, make sure it works... */
	return 0;
}

// vim:foldlevel=2
