#include<stdio.h>

void crash() {
	int i;
	char *test = NULL;
	
	for(i = 0; i < 1000000; i++) {
		printf("%c", test[i]);
	}
}

int main(int argc, char ** argv) {
	int age = 10;
	int height = 72;
	
	printf("I am %d inches tall.", height);
	crash();
}
