#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

/* reverse the input vector... */
void reverse(vector<int>& V)
{
	/* IDEA: swap V[i] with V[n-i-1],
	 * where n is the size. */
	size_t n = V.size();
	for (size_t i = 0; i < n/2; i++) {
		swap(V[i],V[n-i-1]);
	}
}

int main()
{
	int x;
	vector<int> V;
	while (cin >> x) {
		V.push_back(x);
	}
	reverse(V);
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0;
}
