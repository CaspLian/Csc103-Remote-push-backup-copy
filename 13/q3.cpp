#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <cmath> /* for square root */
using namespace std;

/* exam question 3: find maximal distance between
 * any two pairs of points. */

double maxDist(const vector<double>& X, const vector<double>& Y)
{
	double m = 0; /* max SQUARE of distance; set smaller than all distances */
	/* assume X,Y have the same sizes */
	size_t n = X.size();
	for (size_t i = 0; i < n-1; i++) {
		for (size_t j = i+1; j < n; j++) {
			/* compute square of distance between point i and j  */
			double d = (X[i]-X[j])*(X[i]-X[j]) + (Y[i]-Y[j])*(Y[i]-Y[j]);
			/* overwrite candidate if we found a larger one: */
			if (m < d) m = d;
		}
	}
	return sqrt(m);
}

/* main function to test it out: */
int main()
{
	vector<double> X = {3.0,1.0,2.0}; /* x coords */
	vector<double> Y = {9.0,1.0,1.0}; /* y coords */
	cout << maxDist(X,Y) << "\n";
	return 0;
}


/* next topics:
 * strings (maybe 1 week, as they are just specialized vectors)
 * pointers (explicitly storing memory addresses...)
 * */
