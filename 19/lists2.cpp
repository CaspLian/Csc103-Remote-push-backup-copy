#include <iostream>
using namespace std;

/* alternate version of lists.cpp which will attach new nodes
 * to the end instead of the beginning. */

struct node {
	int data;
	node* next;
	/* NOTE: you can add *constructors* for structs and classes. These
	 * give you a way to provide initial values for the pieces upon
	 * creation of the node: */
	node(int d, node* n) {
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
	node* p = L; /* invariant: p is a pointer to the *last* node */
	int x;
	while (cin >> x) {
		/* add new node to the end: */
		/* special case for first node: */
		if (p == NULL) {
			L = new node(x,NULL);
			p = L;
		} else {
			p->next = new node(x,NULL);
			p = p->next;
		}
	}
	/* now print the list... */
	p = L;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}

// vim:foldlevel=2
