/* program to compute the sum of all integers given on stdin */
#include <iostream>  /* gets definition of cin/cout */
using namespace std; /* allows us to call them by first name only */

int main()
{
	/* need two variables: sum so far and most recent */
	int recent;  /* most recent number we've heard */
	int sum = 0; /* sum of all numbers so far */
	/* step 1 is done... on to step 2: listen for new numbers */
	while (cin >> recent) {
		/* NOTE: you can "abuse" cin statements as booleans!  The rule
		 * is that the cin statement counts as "true" if the read
		 * was successful and false otherwise. */
		/* step 3: add both together and write result back to sum */
		sum = sum+recent;
		/* equivalent shortcut: */
		// sum += recent;
	}
	cout << "sum of all numbers was " << sum << "\n";
}

// vim:foldlevel=3
