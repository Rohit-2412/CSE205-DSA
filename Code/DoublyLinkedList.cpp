#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *first = NULL, *last = NULL;

void insertion()
{
    struct node *n = new node;
    cout << "\nEnter data\n";
    cin >> n->data;
    n->next = NULL;
    n->prev = last;
    if (first == NULL)
    {
        first = n;
        last = n;
    }
    else
    {
        last->next = n;
        last = n;
    }
}

void deletion()
{
    int item;
    cout << "\nEnter data\n";
    cin >> item;

    node *ptr = first;
    // single node deletion
    if (ptr->next->next == NULL and last->prev->prev == NULL)
    {
        first = nullptr;
        last = nullptr;
        return;
    }

    while (ptr != nullptr)
    {
        if (ptr->data == item)
        {
            // first node deletion
            if (ptr->prev == nullptr)
            {
                ptr->next->prev = nullptr;
                first = ptr->next;
                free(ptr);
                break;
            }
            // last node deletion
            else if (ptr->next == nullptr)
            {
                ptr->prev->next = nullptr;
                last = ptr->prev;
                free(ptr);
                break;
            }
            // middle node deletion
            else
            {
                ptr->prev->next = ptr->next;
                ptr->next->prev = ptr->prev;
                free(ptr);
                break;
            }
        }

        ptr = ptr->next;
    }
}

void traverse()
{
    int c;
    struct node *ptr1 = first, *ptr2 = last;
    cout << "\n1. Forw..\n2. Back..\n";
    cin >> c;
    cout << "\nElements are : ";
    switch (c)
    {
    case 1:
        while (ptr1 != NULL)
        {
            cout << ptr1->data << "\t";
            ptr1 = ptr1->next;
        }
        break;
    case 2:
        while (ptr2 != NULL)
        {
            cout << ptr2->data << "\t";
            ptr2 = ptr2->prev;
        }
        break;
    default:
        cout << "\nWrong input\n";
    }
}
int main()
{
    int c = 1;
    while ((c > 0) && (c < 4))
    {

        cout << "\n1. Insertion \n2. Display\n3. Deletion\n>";
        cin >> c;
        switch (c)
        {
        case 1:
            insertion();
            break;
        case 2:
            traverse();
            break;
        case 3:
            deletion();
            break;
        default:
            cout << "\nWrong input...";
        }
    }
}