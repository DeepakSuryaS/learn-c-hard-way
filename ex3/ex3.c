#include<stdio.h>

int main(int argc, char ** argv) {
	
	int age = 10;
	int height = 72;
	
	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);
	printf("Alright, let's count, say \a1, \a2, \a3, \a4,... I'm tired let's just say \a10.\n"); //the \a is an escape sequence for a beep or alarm
	printf("This is the percent sign - %%.\n"); //using the % format specifier to display the percent sign
	
	return 0;
}
