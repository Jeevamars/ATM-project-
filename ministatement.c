#include<stdio.h>
#include"Allheader.h"
int pin;
int mini_statement()
{
			int pass,select;
			date();
			centre1();
			printf("***MINI STATEMENT***");
			printf("\nPlease your ATM pin:");
			scanf("%d",&pass);
			system("cls");
			if(pass==pin)
			{
				date();
				centre1();
				printf("STATEMENT FOR");
				rcorner();
				printf("Savings Account  (1)");
				printf("\n\n\t\t\t\t\t\t  Current Account (2)");
				printf("\n\n\nSelect an option to print mini statement:");
				printf("\n\n\nEXIT (0)");
				scanf("%d",&select);
				system("cls");
				if(select==1||select==2)
				{
					date();
				centre();
				printf("***Please take the MINI STATEMENT***");
				printf("\n\n\n\t\t\t\2  Thank you for using ATM  sevice  \2");
				}
				if(select==0)
				{
					date();
				centre();
				printf("\2  Thank you for using ATM  sevice  \2");
				}
			}
			else
			{
				date();
				centre1();
				printf("passord incorrect");
				printf("\n\n\n\t\tPlease remove the ATM card and *TRY AGAIN*");
				printf("\n\n\n\t\t\t\t\2  Thank you for using ATM  sevice  \2");
			}
}


