/* TODO: write a program that reads two integers and prints their greatest
 * common divisor.  E.g., if the two integers were 12 and 18, then your
 * program should print 6.  If the numbers were 12 and 19, it should print 1.
 * NOTE: there is a nice way to do this, known as the Euclidean Algorithm,
 * but my intention is for you to just "brute force" search for the gcd.  */
#include <iostream>
using std::cin;
using std::cout;

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

	return 0;
}

// vim:foldlevel=2
