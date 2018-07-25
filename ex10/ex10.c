#include<stdio.h>

char caseCheck(char letter) {
	if(letter > 'A' && letter < 'Z') {
		return letter + 32;
	} else {
		return letter;
	}
}

int main(int argc, char *argv[]) {
	
	if(argc == 0) printf("Bro, are you kidding? You don't really have arguments bro! \n");
	printf("In case you're wondering what the argv[0] holds, here it is : %s. \n", argv[0]);
	
	int i = 0, j = 1;
	for(j = 1; j < argc; j++) {
		
		printf("\n");
		
		for(i = 0; argv[j][i] != '\0'; i++) {
		 /* the first argument of argv[] i.e., argv[0] is the file name itself.
		    therefore the first argument of argv[] i.e., argv[1] is whatever value we pass as an argument while executing the program.
		    so, the for loop will process the argv[1][i] until it hits a null-character (\0), 'cause strings end with a \0.
		*/
			char letter = argv[j][i];
			letter = caseCheck(letter);
			
			switch(letter) {
				case 'a':
					printf("%d : %c is a vowel.  \n", i, letter);
					break;
					
				case 'e':
					printf("%d : %c is a vowel.  \n", i, letter);
					break;
					
				case 'i':
					printf("%d : %c is a vowel.  \n", i, letter);
					break;
					
				case 'o':
					printf("%d : %c is a vowel.  \n", i, letter);
					break;
					
				case 'u':
					printf("%d : %c is a vowel. \n", i, letter);
					break;
					
				case 'y':
					if(i > 2) {
						printf("%d : %c is a semivowel. \n", i, letter); //it's only sometimes Y
						 //i don't think anything changed because of putting the break inside the if block instead of outside like it's given in the book
						break; 
					}
					
				default:
					printf("%d : %c is not a vowel. \n", i, letter);
			}		
		}
	}
	
	return 0;
}

