/*************************************************************************
  >  File  Name  : recursive.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/05 14:32:43
 ************************************************************************/

#include <stdio.h>

int getAge(int n) {
    if (n == 1)
        return 10;
    else
        return getAge(--n) + 2;
}

int peachCount(int day) {
    if (day == 10)
        return 1;
    else
        return (peachCount(++day) + 1) * 2;
}

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return factorial(n-1) * n;
}

void func(int i){
    if (i>0){
        func(i/2);
    }
    printf("%d\n", i);
}

int main(int argc, char** argv) {
    // int age = getAge(5);
    // printf("age=%d\n", age);
    // int count = peachCount(1);
    // printf("peach count=%d\n", count);
    // int fact = factorial(5);
    // printf("5!=%d\n", fact);
    func(10);
    return 0;
}
