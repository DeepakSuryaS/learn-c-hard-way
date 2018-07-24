#include<stdio.h>

int main(int argc, char *argv[]) {
	
	if(argc != 2) printf("Bro, are you kidding? You don't really have arguments bro! \n");
	printf("In case you're wondering what the argv[0] holds, here it is : %s. \n", argv[0]);
	
	int i = 0;
	for(i = 0; argv[1][i] != '\0'; i++) {
	/* the first argument of argv[] i.e., argv[0] is the file name itself.
	   therefore the first argument of argv[] i.e., argv[1] is whatever value we pass as an argument while executing the program in the terminal.
	   so, the for loop will process the argv[1][i] until it hits a null-character (\0), 'cause strings end with a \0.
	*/
		char letter = argv[1][i];
		
		switch(letter) {
			case 'a':
			case 'A':
				printf("%d : 'A' \n", i);
				break;
				
			case 'e':
			case 'E':
				printf("%d : 'E' \n", i);
				break;
				
			case 'i':
			case 'I':
				printf("%d : 'I' \n", i);
				break;
				
			case 'o':
			case 'O':
				printf("%d : 'O' \n", i);
				break;
				
			case 'u':
			case 'U':
				printf("%d : 'U' \n", i);
				break;
				
			case 'y':
			case 'Y':
				if(i > 2) printf("%d : 'Y'. \n", i); //it's only sometimes Y
				break;
				
			default:
				printf("%d : %c is not a Vowel. \n", i, letter);
		}
	}
	
	return 0;
}
