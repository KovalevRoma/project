#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data; // ������� ������
    struct Node * next; // ��������� �� ��������� ����
};


struct Node *func (struct Node *head, bool (*bul)(int))//bul - ������ �������-�������
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
