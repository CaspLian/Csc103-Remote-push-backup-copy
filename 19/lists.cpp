#include <iostream>
using namespace std;

/* reminder about default parameters for functions: */
#if 0
void f(int x, int y) {...}
f(a,b); // OK
f(); // not OK -- f needs two integers to be run.

// but we can add *default parameters...

void f(int x=0, int y=0) {...}
f(a,b); // still OK
f(); // now this is also OK
#endif

struct node {
	int data;
	node* next;
	/* NOTE: you can add *constructors* for structs and classes. These
	 * give you a way to provide initial values for the pieces upon
	 * creation of the node: */
	node(int d=0, node* n=NULL) {
		data = d;
		next = n;
	}
	/* NOTE: constructors are special functions with NO return type.
	 * (Not even "void" -- we leave out the return type completely).
	 * Note also that it has the same name as the struct in which it
	 * is being defined. */
	/* constructor usage:
	 * static:
	 *     node N(d,n); // make node N with data d and next n
	 *     node* p = new node(d,n); // make node new node (*p) with data d and next n
	 * */
};

int main()
{
	/* read standard input into a list, inserting at the front each time. */
	node* L = NULL; /* official starting point of the list */
	int x;
	while (cin >> x) {
		/* add new node to the beginning: */
		node* p = new node;
		p->data = x;
		p->next = L;
		L = p;
		continue; /* takes us back to the top of the loop */
		/* or with constructors: */
		L = new node(x,L);
	}
	/* now print the list... */
	node* p = L;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}

// vim:foldlevel=2
