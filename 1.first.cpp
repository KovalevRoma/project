#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data; // элемент данных
    struct Node * next; // указатель на следующий узел
};


struct Node *func (struct Node *head, int n)
{
    int k = 0;
    struct Node *p = head;
    while(k < n)
    {
        k++;
        p = p -> next;
    }
    return p;
};
