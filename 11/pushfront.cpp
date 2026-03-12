// #define _GLIBCXX_DEBUG 1
/* above will enable bounds checks if you want them */

#include <iostream>
#include <vector>
using namespace std;

/* add new element to the front of a vector */
#if 0
void push_front(vector<int>& V, int x)
{
	size_t n = V.size(); /* save original size */
	/* 1. add space for new element */
	V.resize(V.size()+1); /* push back could also work */
	/* 2. move all elements to the right... */
	for (size_t i = n; i > 0; i--) {
		V[i] = V[i-1];
		/* NOTE: we have expanded the vector already, so index
		 * n is not out of bounds! */
	}
	/* 3. add new element at index 0 */
	V[0] = x;
}

#endif
/* NOTE: you can also write this to accept vectors of any type of
 * elements, like this: */
template <typename T>
void push_front(vector<T>& V, T x)
{
	size_t n = V.size(); /* save original size */
	/* 1. add space for new element */
	V.resize(V.size()+1); /* push back could also work */
	/* 2. move all elements to the right... */
	for (size_t i = n; i > 0; i--) {
		V[i] = V[i-1];
		/* NOTE: we have expanded the vector already, so index
		 * n is not out of bounds! */
	}
	/* 3. add new element at index 0 */
	V[0] = x;
}

int main()
{
	// int x;
	string x;
	vector<string> V;
	while (cin >> x) {
		push_front(V,x);
	}
	#if 1
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	#endif
	cout << "\n";
}

// vim:foldlevel=3
