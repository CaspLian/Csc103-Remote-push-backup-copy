#include <iostream>
using namespace std;

/* compute the gcd of two integers given on stdin */
int main()
{
	int n,m;
	cin >> n >> m;
	int min = n;
	if (m < n) min = m;
	int d; /* will be the gcd */
	for (d = min; true; d--) {
		if (n % d == 0 && m % d == 0) // we found the answer
			break;
	}
	cout << "gcd was " << d << "\n";
}

// vim:foldlevel=3
