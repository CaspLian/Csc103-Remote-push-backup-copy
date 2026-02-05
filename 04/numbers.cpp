#include <iostream> /* needed for cin/cout/endl */
using namespace std; /* allows us to call above by first name only
                        instead of "std::cin"... */
int main() /* official starting point of the program */
{
	/* NOTE: there are automatic conversion between numeric types.
	 * E.g., you can convert integers to float or double: */
	int x = 2147482247;
	float f = x;
	cout << "f == " << f << "\n";
	printf("f == %f\n",f);
	printf("x == %i\n",x);
	/* let's see how many bytes a float takes: */
	cout << "float takes " << sizeof(float) << " bytes.\n";
	cout << "int takes   " << sizeof(int) << " bytes.\n";

	/* NOTE: when dividing integers, you always get the "quotient", which
	 * means we always round down: */
	cout << "9/10 == " << 9/10 << "\n";
	/* NOTE: you can get the remainder of division using % */
	cout << "9%10 == " << 9%10 << "\n";
	/* And as mentioned before, when mixing floating point and integer,
	 * the result will be floating point.  Integer with integer stays integer. */
}

// vim:foldlevel=3
