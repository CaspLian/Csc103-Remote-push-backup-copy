/* TODO: write a program that reads an integer b (say b < 10), and
 * another integer n, and then prints the digits that represents the
 * integer n in base b.  E.g., if b=7 and n=94, your program would
 * output digits "163", as 94 = 1*49 + 6*7 + 3.  ("361" is also ok if
 * you print the least significant digit first).  Or if b=2 and n=7,
 * then you would print "111" since 7 = 1*4 + 1*2 + 1. */

#include <iostream>
using std::cin;
using std::cout;

int main()
{

	int b;
	int n;

	cout << "enter your base\n";

	cin >> b;

	cout << "enter your integer\n";
	cin>>n;



	while (n>0){
		int digit = n%b;
		cout << digit;
		n /= b;
	}





	return 0;
}

// vim:foldlevel=2
