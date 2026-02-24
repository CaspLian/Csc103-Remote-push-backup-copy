#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: try to find an example violating the "cancellation law".
	 * That is, declare three doubles, d,e,f, and give them values such
	 * that d != e, and yet the sum of d+f is equal to e+f.
	 * Takeaway: prefer integers if they are an option! */
	/* NOTE: if you need a hint, remember that floating point numbers
	 * are stored in something like scientific notation -- there is a
	 * fixed amount of space to write the exponent, and there is also
	 * a fixed amount of space for the coefficient... */

	double d = 75678767876787678;

	double e = 75678767876787670;

	int f = 500;

	cout << d+f << "\n";
	cout << e+f << "\n";



	return 0;
}

// vim:foldlevel=2
