#include<stdio.h>

int main(int argc, char * argv[]) {
	
	int i = 0;
	
	if(argc == 1) {
		printf("You have only one argument. \n");
	} else if(argc > 1 && argc < 4) {
		printf("You have %d arguments and here's your arguments : \n", argc);
		
		for(i = 0; i < argc; i++) {
			printf("%d : %s \n", i, argv[i]);
		}
	} else {
		printf("Sorry bro, you don't have any arguments. \n");
	}
	
	return 0;
	
}
