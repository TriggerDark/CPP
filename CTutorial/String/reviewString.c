/*************************************************************************
  >  File  Name  : reviewString.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 09:15:24
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#if 0
什么是字符串常量？
    "abcd"
c语言如何处理常字符串？
    c语言将常量字符串存储于data rodata，处理为一个指向该段的一个指针
    char *p ="abcd"
不可更改
char arr[]="china";
sizeof(arr) sizeof("china") arr+1 "china"+1

字符串放到字符数组中的等价关系
    sizeof(数组的大小) >= sizeof(字符串的大小)

字符串求长，拼接，拷贝，比较

        strlen      sizeof()
"china"   5           6
p         5           4
arr       5           10

拼接，拷贝 待拼接源和拷贝源，要有足够的空间接纳新的元素


#endif


int main(){
    // char *p1 = "abcd"; char *p2 = "efg";
    // strcat(p1, p2); // 报错

    // char arr1[]="abcd"; char arr2[] = "efg";
    // strcat(arr1, arr2); //报错

    char arr3[10]="abdc"; char arr4[]="rfg";
    strcat(arr3, arr4);
    return 0;
}

int main1(int argc, char** argv) {
    printf("%s\n", "china");
    char* p = "china";
    printf("%s\n", p);
    char arr[10] = "china";
    printf("%s\n", arr);
    return 0;
}
