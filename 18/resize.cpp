#include <iostream>
using namespace std;

/* function to resize dynamically allocated array (of integers).
 * pointer A specifies the beginning of the array; n is the number
 * of elements.  N will be the desired new size.
 * NOTE: dynamic arrays are specified solely by a pointer to the
 * first element, along with the size. */
void resize(int*& A, size_t n, size_t N)
{
	/* step 1: allocate a larger new home for the array */
	int* B = new int[N];
	/* step 2: copy elements to their new home */
	for (size_t i = 0; i < n; i++) {
		B[i] = A[i];
	}
	/* step 3: */
	delete [] A;
	/* step 4: redirect pointer A */
	A = B;
}

int main()
{
	/* use our function to read standard input into a dynamically
	 * allocated array, resizing as necessary (doubling each time) */
	size_t n = 10;
	int* A = new int[n];
	int x;
	size_t count = 0; /* keep track of how many numbers we've read */
	while (cin >> x) {
		if (count == n) { /* we need to reallocate: */
			resize(A,n,2*n);
			n *= 2;
		}
		A[count++] = x;
	}
	for (size_t i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << "\n";
}

// vim:foldlevel=2
