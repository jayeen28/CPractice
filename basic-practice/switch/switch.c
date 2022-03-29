#include<stdio.h>
#include<stdlib.h>

int main(){
	char grade;
	printf("What is your grade?: ");
	scanf(" %c",&grade);
	switch (grade){
		case 'A':
			printf("You did greate. \n");
			break;
		case 'B':
			printf("You did all right \n");
			break;
		case 'C':
                        printf("You did poorly \n");
                        break;
		case 'D':
                        printf("You did very bad \n");
                        break;
		case 'F':
                        printf("You have faild :') \n");
                        break;
		default:
			printf("Invalid grade \n");
	}
	return 0;
}
