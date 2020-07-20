/*************************************************************************
  >  File  Name  : structfread.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/20 19:32:37
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// 为什么结构体会采用fread/fwrite来读写
// 1. 类型不统一
// 2. 可以将二进制转化为文本，使其他哦你翻译，降低效率，占用多余的存储空间

typedef struct student {
    int num;
    char name[30];
    char sex;
    float math;
    float english;
    float chinese;
} Stu;

int main() {
    Stu s[5] = {
        1001, "wukong", 'x', 99, 99, 99,  1002, "songjiang", 'x', 99, 99,  100,
        1003, "baoyu",  'x', 79, 56, 100, 1004, "kiudeihua", 'y', 69, 100, 56,
        1005, "zhaosi", 'z', 23, 12, 60};

    FILE *pf = fopen("stu.data", "w+");
    if (pf == NULL) exit(-1);
    for (int i = 0; i < 5; i++) {
        fwrite((void *)&s[i], sizeof(Stu), 1, pf);
    }

    fclose(pf);
    return 0;
}

