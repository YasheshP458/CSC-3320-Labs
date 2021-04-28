#include <stdio.h>

int main(){
	int itemnumber;
	double price;
	int quantity;
	char date[12];
	printf("Enter item number: ");
	scanf("%d", &itemnumber);
	printf("Enter price: ");
	scanf("%lf", &price);
	printf("Enter quantity: ");
	scanf("%d", &quantity);
	printf("Enter purchase date:");
	scanf("%s", date);
	printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
	printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n\n", itemnumber, price, quantity, date, price * quantity);
	return 0;
}
