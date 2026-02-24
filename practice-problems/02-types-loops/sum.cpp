/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int sum = 0;
	int value;

	while(cin >> value){
		sum += value;

	}

	cout << "sum of all is " << sum << "\n";
	return 0;
}

// vim:foldlevel=2
