#include <iostream>
using namespace std;

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

/* function to search for value x and remove it if it is found.
 * return value: true if x was removed, false otherwise. */
bool remove(node* L, int x)
{
	node* p = L;    /* will be a pointer to the node we want to remove */
	node* q = NULL; /* pointer to the node before p */
	while (p && p->data != x) {
		/* NOTE: in the boolean above, if p is NULL, the second part,
		 * (p->data != x) will not be evaluated.  This is called "short-circuit
		 * evaluation". */
		q = p; /* move q one step ahead */
		p = p->next; /* move p one step ahead. */
		/* NOTE: q starts NULL, which is why we don't do q = q->next. */
	}
	/* how can this loop end?  The boolean keeping it going must be false,
	 * and there are two ways that can happen: either we found x and p is
	 * pointing to that node, or we didn't find it and p is NULL. */
	if (p == NULL) return false;
	/* otherwise, remove the node pointed to by p: */
	q->next = p->next;
	delete p;
	return true;
}
/* NOTE: this remove function is still broken.  Try to fix it if you can. */

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
	/* now try to remove something: */
	remove(L,4);
	/* print again */
	p = L;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}

// vim:foldlevel=2
