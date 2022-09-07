#include <bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    struct node *link;

    node() {}
    node(int x)
    {
        info = x;
        link = NULL;
    }
};
struct node *start = NULL;

void insertion()
{
    int item;
    cout << "\nEnter data\n";
    cin >> item;
    struct node *n = new node;
    n->info = item;
    n->link = start;
    start = n;
}
void insertionAtEnd()
{
    int item;
    cout << "\nEnter data\n";
    cin >> item;
    struct node *n = new node;
    n->info = item;
    node *tmp = start;

    if (tmp == NULL)
    {
        n->link = NULL;
        start = n;
        return;
    }

    while (tmp->link != NULL)
        tmp = tmp->link;

    tmp->link = n;
    n->link = NULL;
}

void insertionAfterNode()
{
    int item;
    cout << "\nEnter data: ";
    cin >> item;
    struct node *n = new node();
    n->info = item;
    n->link = NULL;

    node *curr = start;
    node *prev = NULL;

    while (curr != NULL && curr->info <= item)
    {
        prev = curr;
        curr = curr->link;
    }
    // beginning insertion
    if (prev == NULL)
    {
        n->link = start;
        start = n;
    }
    else
    {
        // making new_node->next = prev_node->link
        n->link = prev->link;
        prev->link = n;
    }
}
void deleteNode()
{
    int item;
    cout << "Enter item to delete: ";
    cin >> item;
    node *ptr = start;
    if (ptr == NULL)
    {
        cout << "Underflow Error!\nNo Element to delete";
    }
    node *prev = NULL;
    node *curr = start;

    while (ptr != NULL && ptr->info != item)
    {
        prev = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL)
    {
        cout << "Element does not exist in the list\n";
    }
    else
    {
        if (prev == NULL)
        {
            start = ptr->link;
        }

        else
        {
            prev->link = ptr->link;
            free(ptr);
        }
    }
}
void display()
{
    struct node *ptr = start;

    if (ptr == NULL)
    {
        cout << "Linked List is Empty!";
        return;
    }
    cout << "\nElements are : ";
    while (ptr != NULL)
    {
        cout << ptr->info << "\t";
        ptr = ptr->link;
    }
}
int main()
{
    int c = 1;
    while ((c > 0) && (c < 6))
    {
        cout << "\n1. Insertion at the beg. \n2. Insertion at End \n3. Insertion after Node\n4. Delete node\n5. Display \n";
        cout << ">";
        cin >> c;
        switch (c)
        {
        case 1:
            insertion();
            break;
        case 2:
            insertionAtEnd();
            break;
        case 3:
            insertionAfterNode();
            break;
        case 4:
            deleteNode();
            break;
        case 5:
            display();
            break;
        default:
            cout << "\nWrong input..exiting..";
        }
    }
    return 0;
}