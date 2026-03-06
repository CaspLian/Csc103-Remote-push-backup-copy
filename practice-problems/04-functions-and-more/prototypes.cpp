/* Function *prototypes* might seem unnecessary -- after all, as long as you
 * place the function earlier in your file than the places you use it, it'll
 * compile just fine.
 * TODO: come up with a situation where at least one function prototype is
 * *strictly necessary*.  Write functions which demonstrate your idea and
 * make sure what you wrote actually compiles (and will not compile without
 * any function prototypes).
 * BTW, if you need a reminder about prototypes, read here:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/lingo.html#function-prototype
 * or here:
 * http://www.charlesli.org/pic10a/lectures/lecture8/index.html
 * */

#include <iostream>
using namespace std;


void call(int x);

int main()
{
	int x;
	cin >> x;
	call(x);



	return 0;
}


void call(int x) {

	x = x*x;
	cout << x << "\n";

}


// vim:foldlevel=2
