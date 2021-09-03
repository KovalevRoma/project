#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data; // элемент данных
    struct Node * next; // указатель на следующий узел
};

struct Node * add_first (struct Node *head, int d)
{
    struct Node *tmp; // указатель на новый узел
    tmp = (struct Node *) malloc(sizeof(struct Node));
        // выделили память
    tmp->data = d; // заполнили поля
    tmp->next = head;
    head = tmp; // установили новое начало списка
    return head;
}

int length (struct Node * head)
{
    struct Node *p = head;
    // указатель p пробегает все элементы списка,
    // начиная с того, на который указывает head
    int i = 0;
    while (p != NULL)
    {
        i++; // подсчет числа элементов
        p = p->next; // переход к следующему элементу
    }
    return i;
}


void print(struct Node * head)
{
    struct Node *p = head; // указатель p пробегает все элементы
    // списка, начиная с того, на который указывает head
    while (p != NULL)
    {
        cout << (p->data);
        p = p->next; // переход к следующему элементу
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
