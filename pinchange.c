#include<stdio.h>
#include"Allheader.h"
int pin;
int pin_change()
{
			int pinn,neww,neww1;
			date();
			centre1();
			printf("***PIN CHANGE***");
			printf("\n\n\t\t\tplease enter your old ATM PIN:");
			scanf("%d",&pinn);
			system("cls");
			if(pin==pinn)
			{
				date();
				centre1();
			printf("Your ATM PIN is Correct");
			printf("\n\n\nPlease enter your NEW pin:");
			scanf("%d",&neww);
			printf("\n\n\nPlease Re-enter your NEW pin:");
			scanf("%d",&neww1);
			system("cls");
			if(neww==neww1)
			{
				date();
				centre();
				printf("***Your ATM PIN is resetted***");
				printf("\n\n\n\t\t\t   \2  Thank you for using ATM  sevice  \2");
			}
			if(neww!=neww1)
			{
				date();
				centre1();
				printf("NEW ATM pin is not matched");
				printf("\n\n\n\t\tPlease remove the ATM card and *TRY AGAIN*");
				printf("\n\n\n\t\t\t\2  Thank you for using ATM  sevice  \2");
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

