#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int meatBalls[5]={7,9,43,21,3};
	printf("Element \t Address \t Value \n");
	for(i=0;i<5;i++){
		printf("meatBalls [%d] \t %p \t %d \n",i,&meatBalls[i],meatBalls[i]);
	};
	//array names are just pointers to the first element of the array.
	printf("\n MeatBalls \t \t %p \n",meatBalls);
	//dereference it
	printf("\n*meatBalls \t\t %d \n",*meatBalls);
	printf("\n*(meatBalls+2) \t\t %d \n",*(meatBalls+2));
	return 0;
};
