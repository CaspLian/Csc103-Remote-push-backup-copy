#include <iostream>
using namespace std;

/* x maps to x^2+1 */
int f(int x)
{
	return x*x+1;
	/* this will never happen: */
	cout << "hello from f!\n";
	/* (known as "dead code") */
}

/* NOTE: this is a GLOBAL variable.  It exist outside of
 * all of our braces {...}! */
int z = -1;

/* new function similar to f, but will not
 * give the same result each time! */
int g(int x)
{
	z++;
	return x*x+1+z;
	/* NOTE: usually global variables are not a great idea.
	 * Use with caution and taste...makes your program harder
	 * to reason about.
	 * Much better is to use function parameters to communicate
	 * information between different parts of a program. */
}

/* Question: when you call a function, does the function get
 * a copy of your input, or the "real thing"? */
int h(int x)
{
	x = x + 7; /* does this affect the value we gave to h? */
	cout << "we changed x from h\n";
	return x;
}
/* Answer: by default, functions get COPIES of the values
 * you give them.  However, this can be changed: */

int hh(int& x)
{
	x = x + 7; /* does this affect the value we gave to h? */
	cout << "we changed x from hh\n";
	return x;
}

int main()
{
	/* how to invoke ("call") a function?  You just have to say
	 * it's name, like this: */
	int y;
	y = f(3);
	/* NOTE: main will stop at this line and go figure out what
	 * f(3) is... */
	cout << "f(3) == " << y << "\n";

	cout << "functions don't have to give the same result on same input:\n";
	for (size_t i = 0; i < 5; i++) {
		cout << "g(3) == " << g(3) << "\n";
	}

	int a = 10;
	int b = h(a);
	cout << "h(a) == " << b << "\n";
	cout << "a == " << a << "\n";
	b = hh(a);
	cout << "hh(a) == " << b << "\n";
	cout << "a == " << a << "\n";
	/* Q: does this make sense? */
	// b = hh(23);
	/* will get an error message about lvalues and rvalues...
	 * lvalue: thing that might appear on the LEFT side of assignment.
	 * rvalue: thing that only would make sense on the RIGHT side.
	 * */


	/* NOTE: the return value from main has a special significance:
	 * it tells the program that invoked it whether or not it
	 * "worked".  0 means "it worked" and all other values are
	 * interpreted as failure of some kind.  You can examine
	 * the return from main in your shell through the variable
	 * "$?". */
	// return 99;
	return 0;
	/* One use: maybe you want to run a command and then run
	 * some other command only if the first one worked:
	 * ./program1 && ./program2 */
	/* NOTE: kind of makes sense, as no other function in our
	 * program calls main... */
}

// vim:foldlevel=3
