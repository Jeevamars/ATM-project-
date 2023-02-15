#include<stdio.h>
#include"Allheader.h"
int pin;
	int cash_withdraw()
{
	int acc,cash,cnt,pass;
	menu:
	centre1();
	date();
	printf("***CASH WITHDRAW***");
	rcorner();
	printf("Current Account   (1)");
	printf("\n\n\t\t\t\t\t\t       Savings Account   (2)");
	printf("\n\n\t\t\t\t\t\t                  EXIT   (0)");
	printf("\n\n\nPlease select the option:");
	scanf("%d",&acc);
	system("cls");
	if(acc==0)
	{
		date();
	centre1();
	printf("***Your transcation is declined***");
	printf("\n\n\n\t\t\t\t\2  Thank you for using ATM  sevice  \2");
	}
	if((acc==1)||(acc==2))
	{
		date();
		centre1();
		printf("Your current balance: 1 0 0 0 0 rs ");
		printf("\n\n\n\n To continue your transction press 1");
		rcorner();
		printf("EXIT (0)");
		scanf("%d",&cnt);
		system("cls");
		if(cnt==1)
		{
			date();
			centre();
			printf("Please enter the amount:");
			scanf("%d",&cash);
			system("cls");
			centre();
			date();
			printf("\nPlease Re-entre your pin to withdraw your cash");
			scanf("%d",&pass);
			system("cls");
			if(pass<10000)
			{
			if(pass==pin)
			{
				date();
				centre();
				printf("Password is correct please Collect the money");
				printf("\n\n\n\t\t\t\t\tYour current balance is:%d",10000-pass);
				printf("\n\n\n\t\t\t\t\2  Thank you for using ATM  sevice  \2");
			}
			else
			{
				date();
				centre1();
				printf("passord incorrect");
				printf("\n\n\n\t\tPlease remove the ATM card and *TRY AGAIN*");
			}
		}
			else
			{
				date();
				centre();
				printf("Your account doesn't have Sufficient Balance");
			}
		}
		if(cnt==0)
		{
			date();
			centre();
			printf("***Your transcation is declined***");
			printf("\n\n\n\t\t\t\t\2  Thank you for using ATM  sevice  \2");

		}
	}

}

