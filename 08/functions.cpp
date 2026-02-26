#include <iostream>
#include <string>
using namespace std;

/* More function examples.
 * NOTE: some of these are simple enough that I probably wouldn't
 * bother writing an entire function for them. */

/* function to tell if integer is even */
bool iseven(int n)
{
	/* just see if there is a remainder when you divide by 2 */
	return (n%2 == 0);
	//      ^^^ int
	//      ^^^^^^^^ bool
	/* remember: the return statement
	 * 1. prescribes the output of the function
	 * 2. ends the function
	 * */
	cout << "this will never happen\n";
}

/* function to compute the gcd of two integers */
int gcd(unsigned int a, unsigned int b)
{
	unsigned int min = a;
	if (b < min) min = b;
	/* one solution to our divide by zero problem: check if one of them
	 * was actually 0 and then return the other one. */
	if (a==0 || b==0) { // alternatively, could check if min == 0
		return a+b;
	} // else... do the rest of the function
	for (unsigned int d = min; true; d--) {
		if (a % d == 0 && b % d == 0) // we found the answer
			return d;
	}
}
/* recall: integers go from -2**31 <= x < 2**31.
 * unsigned integers go from 0 <= x < 2**32.
 * */

/* function to print an nxm rectangle of stars, e.g. 3x5
 *      * * * * *
 *      * * * * *
 *      * * * * *
 * */
void printrectangle(int n, int m)
{
	/* print one row at a time... */
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

/* function that writes a string of characters to a file (be careful!) */
// void writetofile(string s, string filename)
/* this version will return a boolean indicating whether or not
 * the write was successful.  */
bool writetofile(string s, string filename)
{
	/* NOTE: I didn't talk about files yet!  So it is expected
	 * that these details will not make sense, and that's OK. */
	FILE* f = fopen(filename.c_str(),"wb");
	if (f == NULL) return false;
	fwrite(s.c_str(),s.length(),1,f);
	/* XXX: we should also check the return value of fwrite... */
	fclose(f);
	return true;
}
/* NOTE: depending on the inputs, this could go wrong!  We should check
 * for success, and perhaps return a value from this function to indicate
 * whether or not it worked. */


/* function that returns multiple values: return both the quotient
 * and the remainder of a division of integers.  */

int main()
{
	cout << gcd(0,10) << "\n";
	// cout << printrectangle(3,5); // would not make sense!
	int n,m;
	cout << "enter dimensions of rectangle of stars: ";
	cin >> n >> m;
	printrectangle(n,m);
	string fn,s;
	cout << "enter file name to write to: ";
	cin >> fn;
	cout << "enter string to write to file: ";
	cin >> s;
	bool success = writetofile(s,fn);
	if (success) cout << "write to file worked\n";
	else cout << "write to file failed\n";
}

// vim:foldlevel=3
