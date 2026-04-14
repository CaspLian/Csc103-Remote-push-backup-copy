#include <iostream>
using namespace std;

int main()
{
	#if 0
	int x = 8;
	int y = 9;
	int* q = new int; /* dynamic allocation */
	*q = 99;
	cout << "&x		 == " << &x << "\n";
	cout << "&y		 == " << &y << "\n";
	cout << "&<new int> == " << q << "\n";
	/* x and y are 4 bytes apart, but the third address
	 * is quite far away.  x,y live on the *stack*, while
	 * the other lives in the *heap* */
	#endif
	#if 1
	/* NOTE: when you add numbers to pointers, the address you get will
	 * be scaled by the size of the type pointed to: */
	int x = 98;
	char c = 'a';
	int* p = &x;
	char* q = &c;
	printf("p is a pointer to an integer:\n");
	for (size_t i = 0; i < 10; i++) {
		printf("p+%lu == %p\n",i,p+i);
	}
	printf("q is a pointer to a char:\n");
	for (size_t i = 0; i < 10; i++) {
		printf("q+%lu == %p\n",i,q+i);
	}
	#endif
}

// vim:foldlevel=2
