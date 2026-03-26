#include <string>
using namespace std;

size_t find(const string& s1, const string& s2)
{
	size_t i,j;
	size_t n1 = s1.length();
	size_t n2 = s2.length();
	for (i = 0; i < n1-n2; i++) {
		for (j = 0; j < n2; j++)
			if (s1[j+i] != s2[j]) break;
		if (/* found a match */ j == n2) return i;
	}
	return -1;
	/* exercise: find a pair of strings s1,s2 where this approach
	 * is NOT much faster than the one from the notes (using the fold
	 * pattern and boolean variable match) */
}
