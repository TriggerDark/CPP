/*************************************************************************
  >  File  Name  : dynamicList.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/11 15:54:25
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

// 尾插法，在尾节点插入，每插入一个节点，即成尾节点
// 头插法

#if 0
Node* createList() {
    Node* head = (Node*)malloc(sizeof(Node));  // 头指针
    if (NULL == head) exit(-1);
    head->next = NULL;

    Node* p = head;
    Node* q;
    int nodeData;
    scanf("%d", &nodeData);
    while (nodeData) {
        q = (Node*)malloc(sizeof(Node));
        if (NULL == q) exit(-1);
        q->data = nodeData;
        p->next = q;
        p = q;
        scanf("%d", &nodeData);
    }
    p->next = NULL;
    return head;
}
#endif

// 所谓的头插法，就是在头节点后面插入元素，即为首节点
// 让新来的节点有所指向，避免打断原有的指向
#if 0
Node* createList() {
    Node* head = (Node*)malloc(sizeof(Node));  // 头指针
    if (NULL == head) exit(-1);
    head->next = NULL;
    Node* s;
    int nodeData;
    scanf("%d", &nodeData);
    while (nodeData) {
        s = (Node*)malloc(sizeof(Node));
        if (NULL == s) exit(-1);
        s->data = nodeData;
        s->next = head->next;
        head->next = s;
        scanf("%d", &nodeData);
    }
    return head;
}
#endif

Node* createList() {
    Node* head = (Node*)malloc(sizeof(Node));
    if (NULL == head) exit(-1);
    return head;
}

void insertList(Node* head, int nodeData) {
    Node* p = (Node*)malloc(sizeof(Node));
    if (NULL == head) exit(-1);
    p->data = nodeData;
    p->next = head->next;
    head->next = p;
}

// 求长
int lenList(Node* head) {
    int len = 0;
    head = head->next;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

// 查
Node* searchList(Node* head, int findData) {
    head = head->next;
    while (head) {
        if (head->data == findData) break;
        head = head->next;
    }
    return head;
}

// 删
#if 0
void deleteNodeOfList(Node* head, Node* pFind) {
    while (head->next != pFind) {
        head = head->next;
    }
    head->next = pFind->next;
    free(pFind);
    pFind = NULL;
}
#endif

void deleteNodeOfList(Node* head, Node* pFind) {
    if (pFind->next == NULL) {
        while (head->next != pFind) head = head->next;
        head->next = pFind->next;
        free(pFind);
        pFind = NULL;
    } else {
        Node* p = pFind->next;
        pFind->data = pFind->next->data;
        pFind->next = pFind->next->next;
        free(p);
    }
}

// 排序
#if 0
void popSortList(Node* head) {
    int len = lenList(head);
    head = head->next;
    Node *p, *q;
    for (int i = 0; i < len - 1; i++) {
        p = head;  // 每次内重循环从头开始
        q = p->next;  // q总是指向p的下一个节点，也就是被比较的节点
        for (int j = 0; j < len - i - 1; j++) {
            if (p->data > q->data) {
                p->data ^= q->data;
                q->data ^= p->data;
                p->data ^= q->data;
            }
            p = p->next;
            q = p->next;
        }
    }
}
#endif

void popSortList(Node* head) {
    int len = lenList(head);
    Node *p, *q, *prep, *tmp;
    for (int i = 0; i < len - 1; i++) {
        prep = head;
        p = head->next;  // 每次内重循环从头开始
        q = p->next;  // q总是指向p的下一个节点，也就是被比较的节点
        for (int j = 0; j < len - i - 1; j++) {
            if (p->data > q->data) {
                prep->next = q;
                p->next = q->next;
                q->next = p;
                tmp = q;
                q = p;
                p = tmp;
            }
            prep = prep->next;
            p = p->next;
            q = p->next;
        }
    }
}

// 链表反转
void reverseList(Node* head) {
    Node* cur = head->next;
    head->next = NULL;
    Node* t;
    while (cur) {
        t = cur;
        cur = cur->next;
        t->next = head->next;
        head->next = t;
    }
}

// 销毁链表
void destroyList(Node* head) {
    Node* p = NULL;
    while (head) {
        p = head;
        head = head->next;
        free(p);
    }
}

// 遍历链表
void traverseList(Node* head) {
    head = head->next;
    while (head) {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main(int argc, char** argv) {
    Node* head = createList();
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        insertList(head, rand() % 100);
    }
    printf("len=%d\n", lenList(head));

    traverseList(head);
    Node* pFind = searchList(head, 5);
    if (!pFind)
        printf("none\n");
    else {
        printf("in list\n");
        pFind->data = 100;
        traverseList(head);
        deleteNodeOfList(head, pFind);
    }

    traverseList(head);
    printf("after popsort\n");
    popSortList(head);
    traverseList(head);
    printf("reverse:\n");
    reverseList(head);
    traverseList(head);
    destroyList(head);
    return 0;
}
