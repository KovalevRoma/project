#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data; // элемент данных
    struct Node * next; // указатель на следующий узел
};


//A
struct Node *func (struct Node *head, int x)
{
    struct Node *p = head;
    int i = 0;
    while (p != NULL)
    {
        if(p -> data == x)
            return p;
        p = p -> next;
    }
        return NULL;
}

//B
struct Node *func (struct Node *head, int x)
{
    struct Node *p = head, *d = head;
    int i = 0;
    while (p != NULL)
    {
        if(p -> data == x)
        {
            i++;
            d = p;
        }
        p = p -> next;
    }
    if(i == 0)
        return NULL;
    else
        return d; //b
}
