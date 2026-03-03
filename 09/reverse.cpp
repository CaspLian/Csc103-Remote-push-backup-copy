#include <iostream>
#include <vector>
using namespace std;

/* program to print all integers from stdin in reverse order */
int main()
{
	/* How to declare a vector? */
	vector<int> V;
	/* NOTE: vector is not a datatype, but a *template*.  You have to give
	 * it another datatype in the brackets <...>. */
	/* now let's read all integers from stdin and add them to V: */
	int x; /* current input */
	while (cin >> x) {
		V.push_back(x);  /* adds x to the end of V. */
	}
	/* at this point, we have read the entire input into V.  How to access
	 * the elements?  Each one gets a number, starting at 0.  You can get
	 * them via V[i] for an integer i in the range 0,...,V.size()-1. */
	/* now print them in reverse order: */
	for (int i = V.size()-1; i >= 0; i--) {
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0;
	/* NOTE: the above is not as correct as it could be!  The maximum value
	 * for int is 2^31-1.  However, my computer has much more memory than that!
	 * So, the program as written above will fail if you give an input of more
	 * than ~2 billion numbers, even though my computer could handle it.
	 * Q: what is the datatype of V.size()?
	 * A: size_t.
	 * Q: what's that?
	 * A: the largest UNSIGNED integer type that your computer can do native
	 * arithmetic with.  On a 64 bit computer, it will be a 64 bit integer.
	 * Usually synonymous with "unsigned long".
	 * */
	/* the above suggests the following: */
	for (size_t i = V.size()-1; i >= 0; i--) {
		cout << V[i] << " ";
	}
	/* But this is flawed!  variable i can never be less than 0, so
	 * "i >= 0" is the same as "true".  Turns out this works: */
	for (size_t i = V.size()-1; i < V.size(); i--) {
		cout << V[i] << " ";
	}
	/* one more version: use the signed version of size_t: */
	for (ssize_t i = V.size()-1; i >= 0; i--) {
		cout << V[i] << " ";
	}
	/* This will never cause trouble -- your CPU only has 48 pins
	 * to specify a memory address anyway, and this is unlikely to
	 * change anytime soon (48 bits === 256TB of RAM).  Using ssize_t,
	 * we still have 63 bits to work with. */
	return 0;
}
