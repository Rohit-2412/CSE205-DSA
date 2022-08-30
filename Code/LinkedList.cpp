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
    // beg insertion
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
void display()
{
    struct node *ptr = start;
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
    while ((c > 0) && (c < 5))
    {
        cout << "\n1. Insertion at the beg. \n2. Insertion at End \n3. Insertion after Node\n4. Display \n";
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
            display();
            break;
        default:
            cout << "\nWrong input..exiting..";
        }
    }
    return 0;
}