#include<stdio.h>

void split_time(long, int*, int*, int*);

int main() {
	int n,hr=0,min=0,sec=0;
	printf("Enter seconds: ");
	scanf("%d", &n);
	if(n < 0) {
		printf("Seconds can't be negative. Enter non-negative value."); 
	}

	else{
		split_time(n, &hr, &min, &sec);
		printf("Converted format: %d hour(s) %d min(s) %d sec(s)", hr, min, sec);
	}
	return 0;
}

void split_time(long total_sec, int* hr, int* min, int* sec) {
	int remsec= 0;
	*hr=total_sec/3600;
	remsec= total_sec%3600;
	*min= remsec/60;
	*sec= remsec%60;	
}

