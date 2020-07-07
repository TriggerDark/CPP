/*************************************************************************
  >  File  Name  : sortPointerArray.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 18:10:00
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char* cpArr[] = {"china", "ameria", "canada", "japan"};
    for (int i = 0; i < 4; i++) {
        printf("%p, %s\n", cpArr[i], cpArr[i]);
    }

    int n = sizeof(cpArr) / sizeof(char*);
    char* pt;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cpArr[i], cpArr[j]) > 0) {
                pt = cpArr[i];
                cpArr[i] = cpArr[j];
                cpArr[j] = pt;
            }
        }
    }

    printf("===================\n");

    for (int i = 0; i < 4; i++) {
        printf("%p, %s\n", cpArr[i], cpArr[i]);
    }
    return 0;
}
