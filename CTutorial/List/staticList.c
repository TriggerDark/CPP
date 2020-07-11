/*************************************************************************
  >  File  Name  : staticList.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/11 10:33:57
 ************************************************************************/

#include <stdio.h>

// 数据域，我们要存储的数据再此
// 指针域，指针指向下一节点，下一节点的类型是什么，就是本类型

typedef struct node {
    int data;
    struct node* next;
} Node;

// 遍历逻辑
// 指向第一个元素，并且不能为空
// 打印第一个元素的值，同时能得到第二个元素的地址
// 第二个元素的地址赋值给当前指针

int main(int argc, char** argv) {
    Node a, b, c, d, e;  // 此节点都在栈上
    Node* head;          // 开头
    head = &a;

    a.data = 1;  // 内容
    b.data = 2;
    c.data = 3;
    d.data = 4;
    e.data = 5;

    a.next = &b;  // 链接
    b.next = &c;
    c.next = &d;
    d.next = &e;

    e.next = NULL;  // 结尾

    Node* pHead = head;
    while (pHead) {
        printf("%d\n", pHead->data);
        pHead = pHead->next;
    }
    return 0;
}
