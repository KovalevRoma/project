#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data; // ������� ������
    struct Node * next; // ��������� �� ��������� ����
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
