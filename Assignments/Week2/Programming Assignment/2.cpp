#include <stdio.h>
int func(int, int);

#define func(x, y) x/y+x  // = i+j/3+i+j = -6 + -3/3 + -6 + -3 = -8
int main() {
    int i,j;

    scanf("%d", &i);//-6
    scanf("%d", &j);//-3
    printf("%d ",func(i + j, 3));//-8
    #undef func();  // Fill the blank
    printf("%d\n",func(i + j, 3));//-4
}
int func(int x, int y) {
    return x / y + x;
}
