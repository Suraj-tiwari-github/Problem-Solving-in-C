//! Recursive algorithms which counts the size or total numbers of nodes in a binary search tree.
//!Total numbers of nodes =Left subtree +  right subtree + root(+1)
//Algorithm
/*
countNodes(node* Root)
set n=1 //global variable
if root==NULL return 0;
if(root->left!=NULL)->n=n+1; recursion countNodes(left);
if(root->right!=NULL)->n=n+1;recursion countNodes(right);
return n;
*/

#include <iostream>
using namespace std;

int n = 1; //globally declaration
struct node
{
    int data;
    node *left;
    node *right;
};

struct node *getNode(int data)
{
    node *root = new node;
    root->data = data;
    root->right = root->left = NULL;
    return root;
}

struct node *insert(node *root, int data)
{
    if (root == NULL)
        return getNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}

int countNodes(node *root)
{
    // n will count the nodes.
    if (root == NULL)
        return 0;
    if (root->left != NULL)
    {
        n = n + 1;
        n = countNodes(root->left);
    }
    if (root->right != NULL)
    {
        n = n + 1;
        n = countNodes(root->right);
    }
    return n;
}

int main()
{
    node *root = NULL;
    //you haven't assign the insert function in the node and that error has wasted your 45 mins. focus suraj focus.
    root = insert(root, 3);
    insert(root, 4);
    insert(root, 2);
    insert(root, 5);
    insert(root, 1);

    cout << "\nTotal Numbers of nodes in the binary search tree = " << countNodes(root);
    return 0;
}