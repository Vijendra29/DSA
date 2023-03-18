// C++ program for different tree InOrder traversal
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

void printInOrder(struct Node *RootNode)
{
    if (RootNode == NULL)
        return;

    printInOrder(RootNode->left);

    cout << RootNode->data << " ";
    printInOrder(RootNode->right);
}

int main()
{
    struct Node *root = nNode(10);
    root->left = nNode(20);
    root->right = nNode(30);
    root->left->left = nNode(40);
    root->left->right = nNode(50);
    root->right->left = nNode(60);

    printInOrder(root);

    return 0;
}
