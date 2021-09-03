#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data; // ������� ������
    struct Node * next; // ��������� �� ��������� ����
};

struct Node * add_first (struct Node *head, int d)
{
    struct Node *tmp; // ��������� �� ����� ����
    tmp = (struct Node *) malloc(sizeof(struct Node));
        // �������� ������
    tmp->data = d; // ��������� ����
    tmp->next = head;
    head = tmp; // ���������� ����� ������ ������
    return head;
}

int length (struct Node * head)
{
    struct Node *p = head;
    // ��������� p ��������� ��� �������� ������,
    // ������� � ����, �� ������� ��������� head
    int i = 0;
    while (p != NULL)
    {
        i++; // ������� ����� ���������
        p = p->next; // ������� � ���������� ��������
    }
    return i;
}


void print(struct Node * head)
{
    struct Node *p = head; // ��������� p ��������� ��� ��������
    // ������, ������� � ����, �� ������� ��������� head
    while (p != NULL)
    {
        cout << (p->data);
        p = p->next; // ������� � ���������� ��������
    }
    printf("\n");
}

int main()
{
    int n;
    cin >> n;
    struct Node * head = NULL;
    for(int i = 0; i < n; i++)
    {
        head = add_first(head, i);
    }

    print(head);
    free(head->next->next);
    free(head->next);
    free(head);
    return 0;
}
