#include <iostream>
using namespace std;

int main()
{
	/* why do I consider floating point "contamination"? */
	double f = 0.1;
	double g = 0.3;
	if (g == f+f+f) {
		cout << "as expected.\n";
	} else {
		cout << "hmmmmmmm.\n";
		// cout << "g     == " << g << "\n";
		// cout << "f+f+f == " << f+f+f << "\n";
		printf("g     == %.17f\n",g);
		printf("f+f+f == %.17f\n",f+f+f);
	}
	/* Takeaway: using floating point numbers in your programs reduces
	 * your ability to precisely reason about correctness.  Use with caution,
	 * and maybe use them only when necessary. */
	/* Let's look at some other datatypes in more detail... */
	int x; /* range (usually) is -2**31 <= x < 2**31. storage: 4 bytes */
	char c; /* range is -2**7 <= c < 2**7.  storage: 1 byte */
	double d; /* range is... idk.  However, due to the scientific notation
	             representation, there are many numbers in the range that
				 cannot properly be represented.  */
	/* CLOSURE PROPERTIES... what happens when you mix floating point and integer?
	 * what happens when you mix integers and integers in a way that might give a
	 * non-integer result? */
	x = 7;
	int y = 3;
	cout << "x/y == " << x/y << "\n";
	/* NOTE: if we wanted the floating point result, we can convert
	 * one of the pieces to floating point first (*typecasting*): */
	cout << "x/y == " << (double)x/y << "\n";
	/* NOTE: when you mix integers with floating point, you get a floating
	 * point result!  Note also that the typecast operator (double) has
	 * higher *precedence* than division.  Otherwise we would have had
	 * basically (double)(x/y) which would give 2.0 and not 2.3333. */
}

// vim:foldlevel=3
