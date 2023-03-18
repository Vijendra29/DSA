// C++ program for PostOrder traversals
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *nNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);
    printPostorder(node->right);

    cout << node->data << " ";
}

int main()
{
    struct Node *root = nNode(10);
    root->left = nNode(20);
    root->right = nNode(30);
    root->left->left = nNode(40);
    root->left->right = nNode(50);
    root->right->right = nNode(60);

    printPostorder(root);

    return 0;
}
