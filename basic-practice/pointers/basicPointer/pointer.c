#include<stdio.h>
#include<stdlib.h>

int main(){
    int tuna=19;
    int * ptr=&tuna;
    printf("Address \t Name \t Value\n");
    printf("%p \t %s \t %d\n",&tuna,"tuna",tuna);
    printf("%p \t %s \t %d\n",ptr,"tuna",tuna); 

    printf("\n *ptr: %d \n",*ptr);

    *ptr=80;
    printf("tuna:%d",tuna);
    return 0;
};
