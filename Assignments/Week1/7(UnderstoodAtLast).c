#include <stdio.h>

	#define func(x, y) x/y+x //x=-3 y=3 so -1-3=-4 should be the answer but the answer is-8! FUCK

	int main() {
			int z;
	    int i = -6, j = 3;
			printf("%d\n",j+i);
	    printf("%d\n",func(i+j, 3));//i+j=-6+3=-3
	    return 0;
	}
//Actually #define replicates it exactly, so the expression would be i+j/3+i+j = -6 + 3/3 + -6 + 3 = -8
