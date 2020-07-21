/*************************************************************************
  >  File  Name  : management.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/21 10:08:09
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. 初始化数据库，此时的数据库是文件
// 2. 读数据库，生成内存数据模型-链表
// 3. 增、查、改、删、排序
// 4. 更新数据库

typedef struct student {
    char name[30];
    char sex;
    int age;
    float score;
} Stu;

typedef struct _StuNode {
    Stu data;
    struct _StuNode* next;
} StuNode;

void initData2File() {
    Stu s[4] = {{"liudehua", 'x', 50, 100},
                {"zhangxueyou", 'x', 60, 98},
                {"liming", 'f', 60, 88},
                {"guofucheng", 'm', 49, 90}};
    FILE* pf = fopen("stu.data", "w+");
    if (NULL == pf) exit(-1);
    fwrite((void*)s, sizeof(s), 1, pf);
    fclose(pf);
    return;
}

StuNode* createListFromFile(char* filePath) {
    FILE* pf = fopen(filePath, "r+");
    if (NULL == pf) exit(-1);
    StuNode* head = (StuNode*)malloc(sizeof(StuNode));
    head->next = NULL;

    StuNode* p = (StuNode*)malloc(sizeof(StuNode));
    while (fread((void*)&p->data, sizeof(Stu), 1, pf)) {
        p->next = head->next;
        head->next = p;
        p = (StuNode*)malloc(sizeof(StuNode));
    }

    free(p);
    return head;
}

void traverseStuList(StuNode* head) {
    printf("\t\t\t Student Management System\n\n");
    printf("\tname\t\t\tsex\t\tage\t\tsocre\n");
    head = head->next;
    while (head) {
        printf("\t%-10s\t\t%c\t\t%d\t\t%.2f\n", head->data.name, head->data.sex,
               head->data.age, head->data.score);
        head = head->next;
    }
    putchar(10);
}

void addListStu(StuNode* head) {
    StuNode* p = (StuNode*)malloc(sizeof(StuNode));
    printf("name:");
    scanf("%s", p->data.name);
    getchar();
    printf("sex:");
    scanf("%c", &p->data.sex);
    printf("age:");
    scanf("%d", &p->data.age);
    printf("score:");
    scanf("%f", &p->data.score);

    p->next = head->next;
    head->next = p;
}

StuNode* searchListStu(StuNode* head) {
    char name[30];
    printf("pls input your search name:");
    scanf("%s", name);
    head = head->next;
    while (head) {
        if (strcmp(head->data.name, name) == 0) break;
        head = head->next;
    }
    return head;
}

void deleteListStu(StuNode* head) {
    StuNode* pfind = searchListStu(head);
    if (NULL == pfind) {
        printf("您要删除的人不存在\n");
        return;
    }

    while (head->next != pfind) head = head->next;
    head->next = pfind->next;
    free(pfind);
}

int lenListStu(StuNode* head) {
    int len = 0;
    head = head->next;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

void sortListStu(StuNode* head) {
    int len = lenListStu(head);
    StuNode *pre, *p, *q;
    for (int i = 0; i < len - 1; i++) {
        pre = head;
        p = head->next;
        q = p->next;
        for (int j = 0; j < len - i - 1; j++) {
            if (strcmp(p->data.name, q->data.name) > 0) {
                pre->next = q;
                p->next = q->next;
                q->next = p;

                pre = q;
                q = p->next;
                continue;
            }
            pre = pre->next;
            p = p->next;
            q = p->next;
        }
    }
}

void saveListStu2File(StuNode* head, char* filePath) {
    FILE* pf = fopen(filePath, "w+");
    if (NULL == pf) exit(-1);

    head = head->next;
    while (head) {
        fwrite((void*)&head->data, sizeof(Stu), 1, pf);
        head = head->next;
    }
    fclose(pf);
}

void destroyListStu(StuNode* head) {
    StuNode* p;
    while (head) {
        p = head;
        head = head->next;
        free(p);
    }
}

int main() {
    initData2File();
    StuNode* head = createListFromFile("stu.data");

    while (1) {
        system("cls");
        traverseStuList(head);
        printf("1->add\t 2->search\t 3->delete\t 4->sort\t 5->exit\n");

        StuNode* pfind;
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addListStu(head);
                break;
            case 2:
                pfind = searchListStu(head);
                if (pfind) {
                    printf("您要找的数据在本系统中\n");
                    printf("\t%-10s\t\t%c\t\t%d\t\t%.2f\n", pfind->data.name,
                           pfind->data.sex, pfind->data.age, pfind->data.score);
                } else {
                    printf("查无此人\n");
                }
                getchar();
                break;
            case 3:
                deleteListStu(head);
                break;
            case 4:
                sortListStu(head);
                break;
            case 5:
                saveListStu2File(head, "stu.data");
                destroyListStu(head);
                exit(-1);
                break;
            default:
                printf("您输错了\n");
        }
    }
    return 0;
}
