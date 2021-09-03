#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data;
    struct Node * next;
};


struct Node * add(struct Node *head, int d, int n)
{
    struct Node *tmp;
    tmp = (struct Node *) malloc(sizeof(struct Node));

    tmp->data = d;
    if(n == 0)
    {
        tmp->next = head;
        head = tmp;
    }
    else
    {
        int k = 0;
        struct Node **p = &head;
        while(k < n)
        {
            k++;
            p = p -> next;
        }

    }
    return head;
}
