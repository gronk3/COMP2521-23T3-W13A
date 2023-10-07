struct node {
	int value;
	struct node *left;
	struct node *right;
};

int bstCountOdds(struct node *t) { 
    // BASE CASE
    if (t == NULL) {
        return 0;
    // RECURSIVE CASE
    } else if (t->value % 2 == 1) {
        return 1 + bstCountOdds(t->left) + bstCountOdds(t->right);
    } else {
        return 0 + bstCountOdds(t->left) + bstCountOdds(t->right);
    }

}

int bstCountInternal(struct node *t) {
    if (t == NULL) {
        return 0;
    } else if (t->left == NULL && t->right == NULL) {
        return 0;
    } else {
        return 1 + bstCountInternal(t->left) + bstCountInternal(t->right);
    }
}

int bstNodeLevel(struct node *t, int key) {
    if (t == NULL) {
        return -1;
    } else if (t->value == value) {
        return 0;
    } else if (key < t->value) {
        int currLevel = bstNodeLevel(t->left);
        if (currLevel == -1) {
            return -1;
        } else {
            return 1 + currLevel;
        }
    } else (key > t->value) {
        int currLevel = bstNodeLevel(t->right);
        if (currLevel == -1) {
            return -1;
        } else {
            return 1 + currLevel;
        }
    }

}

int bstCountGreater(struct node *t, int val) {
    // TODO
}