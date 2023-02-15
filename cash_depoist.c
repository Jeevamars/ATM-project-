#include<stdio.h>
#include"Allheader.h"
int pin;
int cash_depoist()
{
	int acc,pass,cash,confirm;
	date();
	printf("***CASH DEPOIST***");
	printf("\n\n\t\t\t   Please select the type of depoist");
	rcorner();
	printf("Into current account (1)");
	printf("\n\n\n\t\t\t\t\t\t  Into savings account (2)");
	printf("\n\n\n\t\t\t\t\t\t  EXIT (0)");
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
		printf("\nPlease entre your pin to Depoist your cash");
			scanf("%d",&pass);
			system("cls");
			if(pass==pin)
			{
				date();
				centre();
				printf("***Your maximum depoist amount is 50000***");
				sleep(3);
				system("cls");
				centre();
				printf("Please insert your money in the ATM machine ");
				sleep(3);
				system("cls");
				printf("\n\n\tEnter the amount you have inserted:");
				scanf("%d",&cash);
				system("cls");
				printf("\n\n\n\t\t\tPlease confirm once you inserted the money:");
				rcorner();
				printf("\t\tCONFIRM   (1)");
				printf("\n\n\n\t\t\t\t\t\t\t\t  EXIT   (0)");
				scanf("%d",&confirm);
				system("cls");
				if((confirm==1)&&(cash<50000))
				{
					centre();
					date();
				printf("Your old balance is:%d",10000);
				printf("\n\n\n\tYour current balance is:%d",10000+cash);
				printf("\n\n\n\t***Your amount is depoisted into your account***");
				printf("\n\n\n\t\2  Thank you for using ATM  sevice  \2");
			}
			else
			{
				date();
			printf("\n\n\n\t\t***Your cash is exceed the limit  please take the money***\n\n\n\t\t\t\t\tor"); 
			printf("\n\n\n\t\t   ***you decline the transcation Please TRY AGAIN***");
			printf("\n\n\n\t\t\t   \2  Thank you for using ATM  sevice  \2");
			}
		}
			else
			{
				centre1();
				date();
				printf("passord incorrect");
				printf("\n\n\n\t\tPlease remove the ATM card and *TRY AGAIN*");
			}
		}
}

