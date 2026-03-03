/* TODO: write a program that will read an integer n from standard input and
 * then print the sum of the first n squares.  That is:
 * 1^2 + 2^2 + 3^2 + ... + n^2.
 * NOTE: The '^' operator in C++ is NOT exponentiation!  To square x, just
 * use x*x instead.
 * Bonus question: compute the sum of the first n *odd* squares.  That is,
 * 1^2 + 3^2 + 5^2 + ... + (2n-1)^2
 * */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int n;
	cin >> n;
	int sum = 0;

	for (int i=0; i <= n; i++){
		sum += i*i;
	}

	cout << "the sum of the first n squares is " << sum << "\n";



	return 0;
}

// vim:foldlevel=2
