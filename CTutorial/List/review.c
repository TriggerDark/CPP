/*************************************************************************
  >  File  Name  : review.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/12 21:47:40
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 加入头节点的目的，是对于链表的所有操作，不需要更新头指针

typedef struct _contactsData {
    char name[30];
    char mobileNum[12];
    char fixedNum[12];
    char companyName[30];
} ContactsData;

typedef struct _ContactsNode {
    ContactsData data;
    struct _ContactsNode* next;
} ContactsNode;

int main(int argc, char** argv) {
    ContactsNode* node = (ContactsNode*)malloc(sizeof(ContactsNode));
    if (NULL == node) exit(-1);

    strcpy(node->data.name, "zhangsan");
    strcpy(node->data.mobileNum, "17090099009");
    strcpy(node->data.fixedNum, "0202134888");
    strcpy(node->data.companyName, "qie");

    printf("%s\n", node->data.name);
    printf("%s\n", node->data.mobileNum);
    printf("%s\n", node->data.fixedNum);
    printf("%s\n", node->data.companyName);

    return 0;
}
