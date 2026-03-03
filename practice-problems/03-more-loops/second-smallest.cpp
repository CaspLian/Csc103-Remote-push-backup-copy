/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x;
	int s;
	int ss;

	cin >> s >> ss;
	if(ss < s){
		int temp;
		temp = s;
		s = ss;
		ss = temp;
	}

	while (cin >> x){

	if (x < s) {
		s = x;
	}
	if (s < x || ss > x) {
		ss = x;

	}

	}

	cout << "the second smallest number is " << ss << "\n";

	return 0;
}

// vim:foldlevel=2
