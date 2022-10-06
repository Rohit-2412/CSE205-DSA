#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define nl cout << endl;
const int N = 1e5 + 7, MOD = 1e9 + 7;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node *root = NULL;
void insert(int item)
{
    if (root == NULL)
    {
        root = new Node(item);
        return;
    }
    Node *temp = root;
    Node *parent = NULL;
    while (temp != NULL)
    {
        if (temp->data > item)
        {
            parent = temp;
            temp = temp->left;
        }
        else
        {
            parent = temp;
            temp = temp->right;
        }
    }

    if (parent->data > item)
    {
        parent->left = new Node(item);
    }
    else
    {
        parent->right = new Node(item);
    }
}

void search(int item)
{
    Node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == item)
        {
            cout << "Found";
            return;
        }
        else if (temp->data > item)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    cout << "Not Found";
}

void deleteNode(int item)
{
    Node *temp = root;
    Node *parent = NULL;
    while (temp != NULL)
    {
        if (temp->data == item)
        {
            break;
        }
        else if (temp->data > item)
        {
            parent = temp;
            temp = temp->left;
        }
        else
        {
            parent = temp;
            temp = temp->right;
        }
    }
    if (temp == NULL)
    {
        cout << "Not Found";
        return;
    }
    if (temp->left == NULL && temp->right == NULL)
    {
        if (parent->left == temp)
        {
            parent->left = NULL;
        }
        else
        {
            parent->right = NULL;
        }
        delete temp;
    }
    else if (temp->left == NULL)
    {
        if (parent->left == temp)
        {
            parent->left = temp->right;
        }
        else
        {
            parent->right = temp->right;
        }
        delete temp;
    }
    else if (temp->right == NULL)
    {
        if (parent->left == temp)
        {
            parent->left = temp->left;
        }
        else
        {
            parent->right = temp->left;
        }
        delete temp;
    }
    else
    {
        Node *succ = temp->right;
        Node *succ_parent = temp;
        while (succ->left != NULL)
        {
            succ_parent = succ;
            succ = succ->left;
        }
        temp->data = succ->data;
        if (succ_parent->left == succ)
        {
            succ_parent->left = succ->right;
        }
        else
        {
            succ_parent->right = succ->right;
        }
        delete succ;
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void internal_nodes(Node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL || root->right != NULL)
        cout << root->data << " ";

    internal_nodes(root->left);
    internal_nodes(root->right);
}
void external_nodes(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        cout << root->data << " ";

    external_nodes(root->left);
    external_nodes(root->right);
}
int main()
{
    /*
                5
            3       10
        1    4    6    15
    */
    // Node *root = new Node(5);
    // root->left = new Node(3);
    // root->right = new Node(10);
    // root->left->left = new Node(1);
    // root->left->right = new Node(4);
    // root->right->left = new Node(6);
    // root->right->right = new Node(15);
    // internal_nodes(root);
    // cout << endl;
    // external_nodes(root);

    int choice = 1;
    cout << "Enter choice: " << endl;
    cout << "1. Insert" << endl;
    cout << "2. Search" << endl;
    cout << "3. Delete" << endl;
    cout << "4. Inorder Traversal" << endl;
    cout << "5. Preorder Traversal" << endl;
    cout << "6. Postorder Traversal" << endl;
    cout << "7. Internal Nodes in Preorder Traversal" << endl;
    cout << "8. External Nodes in Preorder Traversal" << endl;
    cout << "9. Exit" << endl;

    while (choice != 9)
    {
        cout << "\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            int item;
            cout << "Enter item: ";
            cin >> item;
            insert(item);
        }
        else if (choice == 2)
        {
            int item;
            cout << "Enter item: ";
            cin >> item;
            search(item);
        }
        else if (choice == 3)
        {
            int item;
            cout << "Enter item: ";
            cin >> item;
            deleteNode(item);
        }
        else if (choice == 4)
        {
            cout << "Inorder Traversal: ";
            inorder(root);
        }
        else if (choice == 5)
        {
            cout << "Preorder Traversal: ";
            preorder(root);
        }
        else if (choice == 6)
        {
            cout << "Postorder Traversal: ";
            postorder(root);
        }
        else if (choice == 7)
        {
            cout << "Internal Nodes (Preorder): ";
            internal_nodes(root);
        }
        else if (choice == 8)
        {
            cout << "External Nodes (Preorder): ";
            external_nodes(root);
        }
        else if (choice == 9)
        {
            break;
        }
        else
        {
            cout << "Invalid choice";
        }
    }
    return 0;
}