/* read standard input and count the words.  We'll use spaces,
 * newlines and tabs as delimiters. */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	size_t count = 0;
	/* we needed only two states.  We'll represent the current state
	 * by an integer using the convention 0 === left state (just read space)
	 * and 1 === just read something else. */
	int state = 0; /* start it out in the left state */
	/* we need to read one character at a time (including spaces).
	 * we'll use scanf for this (cin will ignore whitespace by default). */
	char c;
	while (scanf("%c",&c) == 1) {
		// cout << "char was: " << c << "\n";
		/* for each state, we need to handle all the arrows coming out of it: */
		if (state == 0) {
			/* handle arrows going out of left state */
			if (c == ' ' || c == '\t' || c == '\n') {
				/* token stays in left state... */
			} else {
				/* token moves to right: */
				state = 1;
				/* this also signifies the beginning of a new word: */
				count++;
			}
		} else if (state == 1) {
			/* handle arrows going out of right state */
			if (c == ' ' || c == '\t' || c == '\n') {
				state = 0;
			} else {
				/* token stays in the right state */
			}
		}
	}
	cout << "word count: " << count << "\n";
	return 0;
}

// vim:foldlevel=3
