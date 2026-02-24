/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* this is for 3 only*/
	int x, y, z;
	double avg;
	double rem;
	cin >> x >> y >> z;
	avg = (double)(x + y + z)/3;
	cout << "The average is " << avg << "\n";
	/* This is for any amount */

	int num;
	int on;
	double avg2;
	int i = 0;
	cin >> num;
	i++;
	while (cin >> on) {

		num = num + on;
		i++;


		if (!cin.good()) {
			break;
		}


	}
	avg2 = (double)num/i;


	cout << "The average is " << avg2 << "\n";


	return 0;
}

// vim:foldlevel=2
