#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int main(void) {

	// Stack
	struct node n;
	n.value = 42;
	n.next = NULL;

	// Heap
	struct node *n = malloc(sizeof(struct node));
	n->value = 42;
	n->next = NULL;
    free(n);
}

//////////////////////////////////////////////////////////////////////////////

int main(void) {
    // Stack 
    // int a[5];

    // Heap equivalent 
	int *a = malloc(sizeof(int) * 5);

	// ^ note both are uninitialised

	for (int i = 0; i < 5; i++) {
		a[i] = 42;
	}
}