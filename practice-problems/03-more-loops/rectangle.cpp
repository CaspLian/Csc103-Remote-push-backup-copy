#include <iostream>
using std::cin;
using std::cout;

/* TODO: read two integers n,m and draw (using some for loops) a
 * rectangle of '*' characters that is nxm.  E.g. if n = 3, m = 4
 * then output would be like this: */
// * * * *
// * * * *
// * * * *

int main()
{

	int n, m;
	cin >> n >> m;

	for(int a = 0; a<n; a++){

		for(int i = 0; i<m; i++){

			cout<< "* ";
		}

		cout << "\n";
	}



	return 0;
}

/* Bonus question: change the above so you get a "hollow" rectangle.
 * E.g. if n==4 and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *


// vim:foldlevel=2
