#include<stdio.h>
#include"Allheader.h"
int pin;

int balance_enquiry()
{
	int select;
	date();
		printf("***BALANCE ENQUIRY***");
		printf("\n\n\n\t\t\t\tYour current Balance");
		rcorner();
		printf("Savings Account: 10,000 rs");
		printf("\n\n\t\t\t\t\t\t  Current Account: 10,000 rs");
		printf("\n\n\nTo contine your transcation press (1)");
		printf("\n\n\nEXIT (0)");
		scanf("%d",&select);
		system("cls");
		if(select==0)
		{	
			date();
			centre();
			printf("\2  Thank you for using ATM  sevice  \2");
		}
		return select;
}


