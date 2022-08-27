/*
Array_insertion_1_28066locked
Problem
Submissions
Leaderboard
Suppose You are having 13 playing cards of Heart and among these card you have to pick n cards in sorted order. Your task is to pick another card from the remaining and insert it in proper position of the previously sorted array

example if you have picked 5 cards in sorted order 4 6 8 9 12 and then you pick next card 7 you have to insert the card 7 in its sorted position

Input Format

first line will be no of cards N second line will be the cards in sorted order you picked up Third line will be the card you want to insert

Sample Input 1: 5 4 6 8 9 12 7

Sample Output 1: 4 6 7 8 9 12

Sample Input 2: 6 2 5 7 10 12 13 9

Sample Output 2: 2 5 7 9 10 12 13

Sample Input 3: 4 7 9 10 11 6

Sample Output 3: 6 7 9 10 11

Sample Input 4: 5 7 9 10 11 12 13

Sample Output 4: 6 7 9 10 11 12 13

Constraints

Max size of the array is 13. value of N must greater than 0 and less than 13 All inputs are positive integers and inputs in the second line are non dupicate and in assending order

Output Format

Print the final array After inserting the card in proper position.

Sample Input 0

5
4 6 8 9 12
7
Sample Output 0

4 6 7 8 9 12
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> arr;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.insert(tmp);
    }
    int key;
    cin >> key;
    arr.insert(key);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}