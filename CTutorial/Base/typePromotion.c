#include <stdio.h>

#if 0
整型提升 char short int long long long
混合提升 double float  ---->  double

char short --> int --> float --> double
#endif

int main(void) {

#if 0
    char ch = 'a';
    short sv = 124;
    int var = 345;

    printf("sizeof(ch) = %ld\n", sizeof(ch));
    printf("sizeof(sv) = %ld\n", sizeof(sv));
    printf("sizeof(var) = %ld\n", sizeof(var));

    printf("sizeof(ch+sv) = %ld\n", sizeof(ch+sv));
    printf("sizeof(ch+var) = %ld\n", sizeof(ch+var));

    long long llvar;
    printf("sizeof(llvar+ch) = %ld\n", sizeof(ch+llvar));

    float fv, fv2;
    printf("sizeof(fv) = %ld\n", sizeof(fv+fv2));

    double df;
    printf("sizeof(df) = %ld\n", sizeof(df));
    printf("sizeof(df+fv) = %ld\n", sizeof(df+fv));

    printf("sizeof(var+fv) = %ld\n", sizeof(var+fv));
    printf("sizeof(llvar+fv) = %ld\n", sizeof(llvar+fv));
    printf("sizeof(llvar+df) = %ld\n", sizeof(llvar+df));
#endif

#if 0
    int a = 4.5f;
    printf("a = %d\n", a);

    float fv = 50;
    printf("fv = %f\n", fv);
#endif

    int res1 = 10/3;
    printf("res1 = %d\n", res1);
    float res2 = 10/3;
    printf("res2 = %f\n", res2);

    int a=10, b=3;
    float c = (float) a/b;
    printf("c = %f\n", c);

    return 0;
}