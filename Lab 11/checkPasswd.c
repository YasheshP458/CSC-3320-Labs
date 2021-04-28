#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char password[20]; //Stores the password
	printf("Enter a password with no more than 10 characters: ");
	scanf("%s", password);
	int score= 0; //Stores the score
	int i, present;
	present= 0; //Sets the present variable which is used to determine if the specific character type is present to zero
	for (i= 0; password[i] != '\0'; i++) { //Checks if there are any lowercase letters. If so it will set the present variable to 1.
		if (password[i] >= 'a' && password[i] <= 'z') {
			present= 1;
		}
	}
	if (present == 0) //If the present variable is zero, then the previous character check was not found and it will increase the score
		score= score+20;
	present= 0; //Resets the present variable for the next check
	for (i= 0; password[i] != '\0'; i++) { //Checks if there are any capital letters. If so it will set the present variable to 1
		if (password[i] >= 'A' && password[i] <= 'Z') {
			present= 1;
		}
	}
	if (present == 0) //If the present variable is zero, then the previous character check was not found and it will increase the score
		score= score+20;
	present= 0; //Resets the present variable for the next check
	for (i= 0; password[i] != '\0'; i++) { //Checks if there are any numeric characters. If so it will set the present variable to 1
		if (password[i] >= '0' && password[i] <= '9') { 
			present= 1;
		}
	}
	if (present == 0) //If the present variable is zero, then the previous character check was not found and it will increase the score
        	score= score+20;
	present= 0; //Resets the present variable for the next check
	for (i= 0; password[i+2] != '\0'; i++) { //Checks if there are consecutive alphanumeric characters. If so it will set the present variable to 1
		if ((password[i+2]-password[i+1] == 1) && (password[i+1]-password[i] == 1)){
			present= 1;
		}
	}
	if (present == 1) //If the present variable is zero, then the previous character check was not found and it will increase the score
		score= score+20;
	//Prints out the score then checks if it is above 30. If it is then the error unsafe will show
	printf("Score= %d\n", score);
	if (score>30)
		printf("It is unsafe\n");
	else
		printf("It is safe\n");
}
