#define _GLIBCXX_DEBUG 1
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * NOTE: the above macro will enable bounds checks: any time you access
 * V[i], i will be checked against the size first.  Why is this not there
 * by default?  Answer: performance -- most of the time (ideally), the
 * check will always work out, so why bother penalizing good programmers
 * for the very rare occasion of out of bounds access?
 * NOTE: this rationale is kind of irrlevant on a modern superscalar
 * architecture!  Branch predictors are very good, and this branch in
 * particular is very predictable, so there will be virtually no cost
 * for doing the checks. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x;
	vector<int> V;
	while (cin >> x) {
		V.push_back(x);
	}
	for (size_t i = 0; i < 20; i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
}
