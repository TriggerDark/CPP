/*************************************************************************
  >  File  Name  : vote.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 15:03:50
 ************************************************************************/

#include <stdio.h>
#include <string.h>

typedef struct _candidant {
    char name[30];
    int votecount;
} Candidant;

void disCandidantRes(Candidant* c, int n, int invaildCount) {
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (c[idx].votecount < c[i].votecount) idx = i;
        printf("Name:%10s, Votecount:%d\n", c[i].name, c[i].votecount);
    }
    printf("Invaild:%d\n", invaildCount);
    printf("恭喜%s选举成功！\n", c[idx].name);
}

int main(int argc, char** argv) {
    Candidant can[3] = {{"zhangsan", 0}, {"lisi", 0}, {"wangwu", 0}};
    int invaildCount = 0;
    disCandidantRes(can, 3, invaildCount);

    char buf[1024];
    for (int i = 0; i < 10; i++) {
        printf("pls input your like:");
        scanf("%s", buf);

        int flag = 1;
        for (int i = 0; i < 3; i++) {
            if (!strcmp(buf, can[i].name)) {
                can[i].votecount++;
                flag = 0;
            }
        }
        if (flag) {
            invaildCount++;
        }
    }
    disCandidantRes(can, 3, invaildCount);
    return 0;
}
