#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data; // элемент данных
    struct Node * next; // указатель на следующий узел
};


struct Node *func (struct Node *head, bool (*bul)(int))//bul - данная функция-условие
{
    struct Node *p = head;
    int i = 0;
    while (p != NULL)
    {
        if(bul(p -> data))
            i++;
        p = p->next;
    }
    return i;
}
