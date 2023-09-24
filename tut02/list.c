#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

struct list {
	struct node *head;
};

// HELPER FUNCTIONS SO WE CAN SEE WHAT'S HAPPENING
struct node *createNode(int value);
struct node *listPrepend(struct node *head, int value);
void listPrint(struct node *head);

int listLength(struct list *l) {
    return listLengthR(l->head);
}

int listLengthR(struct node *n) {
    // Base case
    if (l == NULL) {
        return 0;
    // Recursive case
    } else {
        return 1 + listLength(l->next);
    }
}


// ACTUAL RECURSIVE FUNCTIONS
int listLength(struct node *l);
int listCountOdds(struct node *l);
bool listIsSorted(struct node *l);
struct node *listDelete(struct node *l, int value);


int main(void) {

    struct node *head = NULL;
    head = listPrepend(head, 6);
    head = listPrepend(head, 5);
    head = listPrepend(head, 3);
    head = listPrepend(head, 2);
    head = listPrepend(head, 1);
    head = listPrepend(head, 20);
    head = listPrepend(head, 176);
    listPrint(head);

    printf("list length: %d\n", listLength(head));
    printf("number of odds: %d\n", listCountOdds(head));
    if (listIsSorted(head)) {
        printf("THIS IS SORTED!!\n");
    } else {
        printf("not sorted :(\n");
    }

    return 0;
}



struct node *createNode(int value) {
    struct node *n = malloc(sizeof(*n));
    if (n == NULL) {
		fprintf(stderr, "error: out of memory\n");
		exit(EXIT_FAILURE);
	}
    n->next = NULL;
    n->value = value;
    return n;
}

struct node *listPrepend(struct node *head, int value) {
    struct node *n = createNode(value);
    n->next = head;
    return n;
}

void listPrint(struct node *head) {

    if (head == NULL) { return; }

    for (struct node *curr; curr != NULL; curr = curr->next) {
        printf("%d ", curr->value);
    }
    printf("\n");
}


int listLength(struct node *l) {
    // Base case
    if (l == NULL) {
        return 0;
    // Recursive case
    } else {
        return 1 + listLength(l->next);
    }
}

int listCountOdds(struct node *l) {
    // Base case
    if (l == NULL) {
        return 0;
    }
    // Recursive Case
    if (l->value % 2 == 0) {
        return listCountOdds(l->next);
    } else {
        return listCountOdds(l->next) + 1;
    }
}

bool listIsSorted(struct node *l) {
    // Base Case
    // Empty case
    if (l == NULL) {
        return true;
    // One element in our list
    } else if (l->next == NULL) {
        return true;
    } else if (l->value > l->next->value) {
        return false;
    // Recursive case
    } else {
        return listIsSorted(l->next);
    }
}

struct node *listDelete(struct node *l, int value) {
    
    // Base case
    if (l == NULL) {
        return NULL;
    } else if (l->value == value) {
        struct node *temp = l->next;
        free(l);
        return temp;
    // Recursive case
    } else {
        l->next = listDelete(l->next, value);
        return l;
    }
}



// int listCountIterative(struct node *l) {
//     int ctr = 0;
//     for (struct node *curr1; curr1 != NULL; curr1 = curr->next) {
//         for (struct node *curr2; curr2 != NULL; curr2 = curr->next) {
//             ctr++;
//         }
//     }
//     return ctr;
// }