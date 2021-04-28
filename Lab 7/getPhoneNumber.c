#include<stdio.h>
int main() {
	char phone[13];
	printf("Enter a phone number in the following format: (999)999-9999 : ");
	scanf("%s",phone);
	char new[12];
	int i;
	for(i= 1; i< 13; i++) {
		if(i == 4) {
			new[i-1]= '-';
		}
		else {
			new[i-1]= phone[i];
		}
	}
	new[i-1]= '\0';
	printf("You entered %s\n", new);
	return 0;
}
