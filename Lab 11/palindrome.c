#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 20

int ispalindrome(char *userin, int length) { //Function takes an input sequence and the length of that sequence as parameters
	int palindrome= 1; //Assuming the sequence is palindrome
	char reverse[MAX_LENGTH]; //variable to keep reverse of the sequence
	int i;
	int j= 0; //variable to keep current index of reverse sequence
	for (i= length-1; i>=0; i--) { //loop to get the reverse of the input
		reverse[j]= userin[i];
		j++;
	}
	reverse[j]= '\0';
	for (i= 0; i<length; i++) {
		if(userin[i] != reverse[i]) { //compares the normal and reverse for mismatches. If a mismatch is found then it is not a palindrome
			palindrome= 0;
			break;
		}
	}
	return palindrome; //Returns the value of integer palindrome
}

int main() {
	char user[MAX_LENGTH];
	printf("Enter the sequence: ");
	scanf("%s", user);
	if (ispalindrome(user, strlen(user))) { 
		printf("%s is a palindrome\n", user);
	}
	else {
		printf("%s is not a palindrome\n", user);
	}
	return 0;
}
