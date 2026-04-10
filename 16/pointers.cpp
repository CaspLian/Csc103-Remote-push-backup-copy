#include <iostream>
using namespace std;

/* experiments with pointers */
int main()
{
	int x;
	int* p = &x; /* make p point to x */
	/* at this point, *p IS x. */
	*p = 100;
	// cout << "x == " << x << "\n";
	int y = 23;
	int* q = &y;

	cout << " x == " << x << "\n";
	cout << " y == " << y << "\n";
	cout << "*p == " << *p << "\n";
	cout << "*q == " << *q << "\n";

	*q = (size_t)p;

	cout << " x == " << x << "\n";
	cout << " y == " << y << "\n";
	cout << "*p == " << *p << "\n";
	cout << "*q == " << *q << "\n";

	#if 0
	q = new int;

	p = (int*)123;
	*p = 999;
	#endif
}

// vim:foldlevel=3
