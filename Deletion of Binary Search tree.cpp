#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

struct node *getNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
        return getNode(data);
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

struct node *findMax(struct node *root)
{
    while (root->right != NULL) // max value will alway be on the right side of the tree.
    {
        root = root->right;
    }
    return root;
}

struct node *Delete(struct node *root, int data)
{
    struct node *temp;
    if (root == NULL)
        printf("\nNo such element exits");
    else if (data < root->data)
    {
        root->left = Delete(root->left, data);
    }
    else if (data > root->data)
        root->right = Delete(root->right, data);
    else
    {
        //element is found if the above if conditions failed
        if (root->left && root->right) //both children
        {
            temp = findMax(root->left);
            root->data = temp->data;
            root->left = Delete(root->left, root->data); // deleting the findmax node which is already shifted to root->data;
        }
        else
        {
            //one child or none child
            temp = root;
            if (root->left == NULL)
                root = root->right;
            if (root->right == NULL)
                root = root->left;
            free(temp);
        }
    }
    return root;
}
int countNodes(node *root)
{
    // n will count the nodes.
    int n;
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
    root = insert(root, 20);
    insert(root, 15);
    insert(root, 25);
    insert(root, 18);
    insert(root, 10);
    insert(root, 16);
    insert(root, 19);
    insert(root, 7);

    cout << "\nBefore deletion\nInorder: ";

    cout << "\nTotal numbers of nodes in the binary search tree is " << countNodes(root);
    inorder(root);
    cout << "\n\n";

    Delete(root, 15);

    inorder(root);
    return 0;
}