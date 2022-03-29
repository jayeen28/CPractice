#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(){
	struct Student student1;
	student1.age=21;
	student1.gpa=5.00;
	strcpy(student1.name,"MD. Jayeen Bin Alam.");
	strcpy(student1.major,"Business");
	printf("%f",student1.gpa);

	return 0;
};
