#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
      int av=*a+*b;
      int bv=*a-*b;
      *a=av;
      *b=abs(bv);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}