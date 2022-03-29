#include<stdio.h>
#include<stdlib.h>

void greet(char name[],int age){
        printf("Hello %s %d \n",name,age);
}

int main(){
	char name[20];
	int age;
	printf("Your name please: ");
	scanf("%s", name);
	printf("And your age: ");
	scanf("%d",&age);
	greet(name,age);
	return 0;
}

