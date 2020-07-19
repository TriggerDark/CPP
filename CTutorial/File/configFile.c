/*************************************************************************
  >  File  Name  : configFile.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/16 14:27:13
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* pf = fopen("smb.conf", "r+");
    if (NULL == pf) exit(-1);
    FILE* pfbak = fopen("smb.conf.bak", "w");
    if (NULL == pfbak) {
        fclose(pf);
        exit(-1);
    }

    char ch[1024];

    while (fgets(ch, 1024, pf)) {
        if (*ch == '#' || *ch == '\n' || *ch == ' ' || *ch == '\t') continue;
        printf("%s\n", ch);
        fputs(ch, pfbak);
    }

    fclose(pf);
    fclose(pfbak);
    return 0;
}
