#include<bits/stdc++.h>
using  namespace std;
#define NODE(T) \
struct Node_##T \
{\
    T data; \
    struct Node_##T *next; \
};

#define FUNC(T)\
struct Node_##T *func (struct Node_##T *head, int n)\
{\
    struct Node_##T *p = head;\
    for(int i = 0; i < n; i++)\
        p = p -> next;\
    return p;\
}

