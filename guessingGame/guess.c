#include<stdio.h>
#include<stdlib.h>

int main(){
	int secretNumber=5;
	int guess;
	int guessCount=0;
	int outOfGuesses=0;

	while(guess!=secretNumber&&outOfGuesses==0){
		if(guessCount<3){
			printf("Enter a number: ");
                	scanf("%d",&guess);
                	guessCount++;
		}else{
			outOfGuesses=1;
		}
	};
	if(outOfGuesses==1){
		printf("Out of guesses :')\n");
	}else{
		printf("You win!\n");
	}
	return 0;
}
