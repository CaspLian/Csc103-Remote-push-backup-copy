// #define _GLIBCXX_DEBUG 1
/* above will enable bounds checks if you want them */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x;
	vector<int> V;
	while (cin >> x) {
		// push_front(V,x);
		V.push_back(x);
	}
	#if 0
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	#endif
	cout << "\n";
}

// vim:foldlevel=3
