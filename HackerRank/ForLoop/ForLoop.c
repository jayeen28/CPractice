#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    char* numberStr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    // Complete the code.
    for(int n=a;n<=b;n++){
        if(n>9){
            if(n%2==0)printf("even\n");
            else printf("odd\n");
        }
        else printf("%s\n",numberStr[n]); 
    }
    return 0;
}