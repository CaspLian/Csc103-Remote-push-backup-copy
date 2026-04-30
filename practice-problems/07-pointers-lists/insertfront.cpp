#include <iostream>
using std::cout;
using std::cin;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};

int main()
{
	/* TODO: read integers from stdin and insert each one to the front
	 * of a linked list. */
	int x;
	node* L = NULL;


	while (cin >> x){

	node* p = new node;

	p->data = x;
	p->next = L;
	L=p;



	}
	/* TODO: print the list back out so you know it worked. */

	while (L != NULL){
		cout << L->data << " ";
		L = L->next;
	}
cout << "\n";

	return 0;
}

// vim:foldlevel=2
