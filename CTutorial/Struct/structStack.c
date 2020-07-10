/*************************************************************************
  >  File  Name  : structStack.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 21:12:59
 ************************************************************************/

#include <stdio.h>

// top==0 不能往外弹，已到栈底
// top==8 不能往里压，已到栈顶

// top始终指向一个待插入的位置
// push操作，1 写入数据 2 top++    3 此两步的前提是栈非满
// pop操作， 1 top--    2 弹出数据 3 此两步的前提是栈非空

typedef struct _Stack {
    char mem[1024];
    int top;
} Stack;

int isFull(Stack *ps) { return ps->top == 1024; }

int isEmpty(Stack *ps) { return ps->top == 0; }

void push(Stack *ps, char ch) { ps->mem[ps->top++] = ch; }

char pop(Stack *ps) { return ps->mem[--ps->top]; }

int main(int argc, char **argv) {
    Stack s = {{0}, 0};

    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (!isFull(&s)) push(&s, ch);
    }

    while (!isEmpty(&s)) {
        putchar(pop(&s));
        putchar('\n');
    }

    return 0;
}
