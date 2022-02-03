//here we are standard template library STL queue where we find out how many nodes are available in the tree.
//In order to check whether it's leaf node or not we need to check that both the left and right child should poses NULL then it can be said has it a leaf node.
#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left, *right;
};

node *newNode(int data)
{
    node *root = new node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
        return newNode(data);
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}

int leafNode(node *root)
{
    queue<node *> leaf; // using STL queue
    node *temp;
    int count = 0;
    leaf.push(root);
    while (!leaf.empty()) // till leaf will became empty.
    {
        temp = leaf.front(); //temp has a root
        leaf.pop();
        if (!temp->left && !temp->right) // NUll in left and right makes If true.
        {
            count++;
            cout << temp->data << "  ";
        }
        if (temp->right)
            leaf.push(temp->right); //enqueue in right
        if (temp->left)
            leaf.push(temp->left); // enqueue in left
    }
    cout << endl;
    return count;
}

int main()
{
    node *root = NULL;
    root = insert(root, 2);
    insert(root, 7);
    insert(root, 5);
    insert(root, 9);
    insert(root, 4);
    insert(root, 6);
    insert(root, 5);
    insert(root, 11);
    insert(root, 2);

    cout << "Leaf Nodes: " << endl;
    int c = leafNode(root);
    cout << "\nNo of nodes in the tree is " << c;
    cout << endl;
    return 0;
}
