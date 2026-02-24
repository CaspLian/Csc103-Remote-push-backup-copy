#include <iostream>
using namespace std;

int main()
{
	/* print a message 10 times with a for loop: */
	#if 0
	int i;
	for (i = 0; i < 10; i++) {
		cout << "8D\n";
	}
	cout << i << "\n";
	#endif
	/* same thing as a while loop: */
	#if 0
	int i = 0;
	while (i < 10) {
		cout << "8D\n";
		i++;
	}
	#endif
	/* usage note: this are typically chosen over while loops
	 * when you know the bounds ahead of time. */
	/* one more example: rewrite a while loop as a for loop: */
	#if 0
	int x;
	// int sum = 0;
	while (cin >> x) {
		sum += x;
	}
	for (;cin >> x;) {
		sum += x;
	}
	// OR, could do this:
	int sum;
	for (sum = 0; cin >> x; sum += x);
	/* NOTE: had to declare sum *outside* the loop, otherwise
	 * it's scope will be limited to the loop. */
	cout << "sum  was " << sum << "\n";
	#endif

	/* exercise: print a rectangle of nxm star characters.
	 * E.g., if n = 3 and m = 5, then you would print:

	             * * * * *
	             * * * * *
	             * * * * *

	 * */
	/* first get n and m: */
	int n,m;
	cin >> n >> m;
	/* how could we print a single row of m stars? */
	for(int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}

// vim:foldlevel=3
