/* TODO: write a function to resize a dynamically allocated array.
 * Prototype is given below.  Remember: the basic steps are as follows:
 * 1. Allocate a new chunk of memory of the desired size.
 * 2. Copy elements from the old array to the new one.
 * 3. Free the old one (delete).
 * 4. Redirect the pointer to the new array.
 * NOTE: your function should work even if newsize < oldsize.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* your answer goes here... */
void resize(int*& A, size_t oldsize, size_t newsize)
{
	int * B = new int[newsize];

	for(size_t i=0; i < std::min(oldsize, newsize); i++){
		B[i] = A[i];
	}
	delete []A;
	A = B;



}

int main()
{
	/* TODO: use your resize function to read an arbitrary number of integers
	 * from stdin.  Each time you run out of space, double the array size. */

	size_t n =10;
	int* A = new int[n];
	int x;
	size_t count = 0;

	while (cin >> x){
			if (count == n) {
				resize(A,n,2*n);
				n *= 2;
			}
			A[count++] = x;

	}

	for (size_t i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << "\n";



	return 0;
}

// vim:foldlevel=2
