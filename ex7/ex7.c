#include<stdio.h>

int main(int argc, char * argv[]) {
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'S';
	char first_name[] = "Deepak";
	char last_name[] = "Surya";
	
	printf("You're %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("My first name is %s.\n", first_name);
	printf("My last name is %s.\n", last_name);
	printf("My whole name is %s %s %c.\n", first_name, last_name, initial);
	
	int bugs = 100;
	float bug_rate = 1.2;
	
	printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);
	
	long universe_of_defects = 1L * 1024L * 1024L * 1024L; //the L tells the program to print the number as a long decimal.
	printf("The entire universe has %ld bugs in it. \n", universe_of_defects);
	
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs. \n", expected_bugs);
	
	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe. \n", part_of_universe); //the result is so small that we have to use %e to print it in scientific notation.
	
	//this makes no sense, just a demo of something weird
	char nul_byte = '\0'; // '\0' creates the nul_byte character. this is effectively the number 0.
	int care_percentage = bugs * nul_byte; /*a char is a numeric type, same as an int but shorter. therefore, it holds a numerical representation of the symbol (ASCII code). here we are multiplying a char and an int, but the multiplication works, that's because the nul_byte has a value of '\0' which is effectively a zero i.e., the ascii value of the null character is 0 (this zero is different from the digit character '0' whose ascii value is 48). */
	printf("Which means you should care %d%% . \n", care_percentage); //this is how you can print out the '%' character.
	
	return 0;	
}
