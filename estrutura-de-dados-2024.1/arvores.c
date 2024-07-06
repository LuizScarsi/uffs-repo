#include <stdio.h>

typedef struct node {
    int value;
    struct node *left, *right;
} Node;

Node *addNode(Node *root, Node *new);
Node *searchNodeValue(Node *root, int value);
void showPreOrder(Node *root);
void showInOrder(Node *root);
void showPosOrder(Node *root);

int main() {
    int value;
    Node *newnode = NULL;
    for (int i = 0; i < 5; i++) {
        scanf("%d", value);
        newnode = (Node *)malloc(sizeof(Node));
        newnode->value = value;
        newnode->right = NULL;
        newnode->left = NULL;
    }

    return 0;
}

Node *addNode(Node *root, Node *new) {
    if (root == NULL) {
        return new;
    } else {
        if (root->value >= new->value) {
            root->left = addNode(root->left, new);
        } else {
            root->right = addNode(root->right, new);
        }
    }
    return root;
}

Node *searchNodeValue(Node *root, int value) {
    if (root == NULL) return root;
    if (root->value == value) return root;

    if (root->value > value) {
        return searchNodeValue(root->left, value);
    } else if (root->value < value) {
        return searchNodeValue(root->right, value);
    }
}

void showPreOrder(Node *root) {
    if (root == NULL) return;
    printf("%d ", root->value);
    showPreOrder(root->left);
    showPreOrder(root->right);
}

void showInOrder(Node *root) {
    if (root == NULL) return;
    showInOrder(root->left);
    printf("%d ", root->value);
    showInOrder(root->right);
}

void showPosOrder(Node *root) {
    if (root == NULL) return;
    showPosOrder(root->left);
    showPosOrder(root->right);
    printf("%d ", root->value);
}
