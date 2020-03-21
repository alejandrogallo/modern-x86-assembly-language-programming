#include <stdio.h>

extern "C" int CalcSum_(int a, int b, int c);
extern "C" int CalcSumAlternative_(int a, int b, int c);

int main(int argc, char* argv[])
{

  {
    int a = 5, b = 20, c = 213;
    int sum = CalcSum_(a, b, c);

    printf("a:   %d\n", a);
    printf("b:   %d\n", b);
    printf("c:   %d\n", c);
    printf("sum: %d\n", sum);

  }

  {
    int a = 5, b = 20, c = 213;
    int sum = CalcSumAlternative_(a, b, c);

    printf("=========\n");
    printf("a:   %d\n", a);
    printf("b:   %d\n", b);
    printf("c:   %d\n", c);
    printf("sum: %d\n", sum);

  }


    return 0;
}
