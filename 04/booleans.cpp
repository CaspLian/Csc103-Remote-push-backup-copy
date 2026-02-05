#include <iostream>
using namespace std;
/* exploring booleans (the bool datatype) */

int main()
{
	bool b = false;
	cout << "b == " << b << "\n";
	/* NOTE: integers can be interpreted as booleans!
	 * The convention is that 0 means false, and all other numbers mean true. */
	b = 123;
	cout << "b == " << b << "\n";
	b = 0;
	cout << "b == " << b << "\n";
	/* NOTE: assignment statements have a value! */
	int x,y;
	cout << "enter x and y: ";
	cin >> x >> y;
	cout << "x == " << x << "\n";
	cout << "y == " << y << "\n";
	#if 0  /* NOTE: You can comment out big blocks using this construct. */
	cout << "value of (x = y) is " << (x = y) << "\n";
	cout << "x == " << x << "\n";
	cout << "y == " << y << "\n";
	#endif
	if (x = y) {
		cout << "x and y are equal\n";
	} else {
		cout << "x and y are not equal\n";
	}
	cout << "x == " << x << "\n";
	cout << "y == " << y << "\n";

	/* Boolean Expressions */
	/* you can combine booleans with these:
	 * && (this means AND)
	 * || (this means OR)
	 * You can also invert/negate a single boolean using !
	 * !true == false
	 * !false == true
	 * !!b == b
	 * */
	/* See professor Li's notes for more details. */
}

// vim:foldlevel=3
