/* TODO: write a function which takes three integer parameters and returns
 * the largest one. */

#include <iostream>
using std::cin;
using std::cout;

int max(int x, int y, int z){

	if (x > y && x >z) {
		return x;
	} else if (y >x && y > z) {
		return y;
	} else if (z >x && z>y) {
		return z;
	}

 return 0;
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	// TODO: call your function, make sure it works...

	int r = max(x,y,z);
	cout << "the largest is " << r << "\n";

	return 0;
}

// vim:foldlevel=2
