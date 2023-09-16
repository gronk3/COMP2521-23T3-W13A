// Representation 1
struct node {
    int value;
    struct node *next;
};

// note the type of struct in the parameters
int listLength(struct node *list);
void appendNode(struct node *list, struct node *n);
int listSum(struct node *list);



// Representation 2
struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
    struct node *tail;
};

// note the type of struct in the parameters
int listLength(struct list *list);
void appendNode(struct list *list, struct node *n);
int listSum(struct list *list);