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

// Heap
// Heap is a complete binary tree
// Heap is a special tree structure in which each parent node is less than or equal to its child node
// Heap is used to implement priority queue
// Heap is implemented using array

// Max Heap
// In max heap the parent node is always greater than its child node

vi heap; // global heap array
vi maxHeap(vi &a)
{
    int n = a.size();

    // inserting elements in heap
    rep(i, 0, n)
    {
        int childIdx = i;

        while (childIdx > 0)
        {
            int parentIdx = (childIdx - 1) / 2;

            if (heap[childIdx] > heap[parentIdx])
            {
                swap(heap[childIdx], heap[parentIdx]);
            }
            else
            {
                break;
            }
            childIdx = parentIdx;
        }
    }
    return heap;
}

vi deleteMax(vi &a)
{
    int n = a.size();

    swap(heap[0], heap[n - 1]);
    heap.pop_back();

    int parentIdx = 0;
    int leftIdx = 2 * parentIdx + 1;
    int rightIdx = 2 * parentIdx + 2;

    while (leftIdx < n)
    {
        int maxIdx = parentIdx;

        if (heap[leftIdx] > heap[maxIdx])
        {
            maxIdx = leftIdx;
        }

        if (rightIdx < n && heap[rightIdx] > heap[maxIdx])
        {
            maxIdx = rightIdx;
        }

        if (maxIdx == parentIdx)
        {
            break;
        }

        swap(heap[maxIdx], heap[parentIdx]);
        parentIdx = maxIdx;
        leftIdx = 2 * parentIdx + 1;
        rightIdx = 2 * parentIdx + 2;
    }
    return heap;
}

void deleteElement(vi &a, int val)
{
    int n = a.size();

    int i;
    rep(i, 0, n)
    {
        if (heap[i] == val)
        {
            break;
        }
    }

    swap(heap[i], heap[n - 1]);
    heap.pop_back();

    int parentIdx = i;
    int leftIdx = 2 * parentIdx + 1;
    int rightIdx = 2 * parentIdx + 2;

    while (leftIdx < n)
    {
        int maxIdx = parentIdx;

        if (heap[leftIdx] > heap[maxIdx])
        {
            maxIdx = leftIdx;
        }

        if (rightIdx < n && heap[rightIdx] > heap[maxIdx])
        {
            maxIdx = rightIdx;
        }

        if (maxIdx == parentIdx)
        {
            break;
        }

        swap(heap[maxIdx], heap[parentIdx]);
        parentIdx = maxIdx;
        leftIdx = 2 * parentIdx + 1;
        rightIdx = 2 * parentIdx + 2;
    }
}
int main()
{

    int n;
    cin >> n;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        heap.push_back(x);
    }

    maxHeap(heap);
    rep(i, 0, n)
    {
        cout << heap[i] << " ";
    }
    cout << endl;

    cin >> n;
    rep(i, 0, n)
    {
        int data;
        cin >> data;
        deleteElement(heap, data);
        rep(i, 0, n)
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
    return 0;
}