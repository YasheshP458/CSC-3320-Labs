#include <stdio.h>

struct dialcode { //A struct that will contain the codes
    char *country;
    int code;
};

int main(int a, char* b[]) {
	int internationalcode, i; //Declaring variables
	const struct dialcode countrycode[] = {
        	{"Argentina", 54}, {"Belgium", 32},
		{"Brazil", 55}, {"Bulgaria", 359},
        	{"China", 86}, {"Colombia", 57},
        	{"Chile", 56}, {"Egypt", 20},
        	{"Ethiopia", 251}, {"France", 33},
        	{"Germany", 49}, {"India", 91},
        	{"Ireland", 353}, {"Iran", 98},
        	{"Italy", 39}, {"Japan", 81},
        	{"Mexico", 52}, {"Nwe Zealand", 64},
        	{"Peru", 51}, {"Philippines", 63},
        	{"Russia", 7}, {"United Sates", 1}
        };
	int entries= sizeof(countrycode) / sizeof(*countrycode); //The number of entries is determined by dividing the sizeof the orginal and the pointer
	do{ //Loop that asks user for a code and checks with the list to see if it's in the list. If not, it print not found
	int present= 0;
	printf("Please input the international code(-999 to exit): ");
	scanf("%d", &internationalcode);
	if (internationalcode == -999)
		break;
	for (i= 0; i<entries; i++) {
		if (countrycode[i].code == internationalcode) { //Compares inputted code to the list
			printf("The country is: %s\n", countrycode[i].country);
			present= 1;
		}
	}
	if (!present)
		printf("Code not found.\n");
	}  while(1);
	return 0;
}
