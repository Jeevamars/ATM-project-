/*
	Name: Jeeva M
	Date: 09/02/23 23:04
	Description: ATM
*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void centre();
void centre1();
void rcorner();
void display();
void date();
int pin;
int main()
{
		int n,op,k;
		date();
		centre1();
		printf("****CCC BANK****");
		centre();
		printf("\3 Welcome to ATM service\3");
		printf("\n\n\t\t\t\t***INSERT ATM CARD***\n\n\t\t\t\tPRESS 1 if you inserted");	
	scanf("%d",&n);
	system("cls");
	display();
	pin:
	if(n==1)
	{
		
		centre();
		printf("Please enter your \n\t\t\t 4-digit ATM PIN:");
		scanf("%d",&pin);
		system("cls");
	}
		if(pin>999&&pin<10000)
		{
			centre();
			printf("***Your passord is correct***");
			sleep(2);
			system("cls");
			date();
			centre1();
		menu:
		printf("MAIN MENU");
		printf("\n\n\t(1)   CASH WITHDRAW \t\t\tBALANCE INQUIRY   (4)");
		printf("\n\n\n\t(2)   CASH DEPOIST\t\t\t MINI STATEMENT   (5)");
		printf("\n\n\n\t(3)   CREATE ACCOUNT\t\t\t     CHANGE PIN   (6)");
		printf("\n\n\n\t\t\t\t\t\t\t   EXIT   (0)");
		printf("\n\n\nSelect an option to continue the process:");
		scanf("%d",&op);
		system("cls");
		switch(op)
		{
			case 1:
				date();
				centre1();
				cash_withdraw();
				break;
			case 2:
				date();
				centre1();
				cash_depoist();
				break;
			case 3:
				date();
				centre1();
				create_account();
				break;
			case 4:
				date();
				centre1();
				k=balance_enquiry();		
				if(k==1)
				{
					centre1();
					goto menu;
				}
				break;
			case 5:
				date();
				centre1();
				mini_statement();
				break;
			case 6:
				date();
				centre1();
				pin_change();
				break;
			case 0:
				centre();
				printf("\2  Thank you for using ATM  sevice  \2");
		}
	}
	else
	{
		centre1();
		printf("INVALID PIN");
		printf("\n\n\n\t\t\tPLEASE ENTER CORRECT PIN");
		goto pin;
	}
	getch();
}

void date()
{
	time_t tim;
	time(&tim);
	printf("%s",ctime(&tim));
}





	void centre()
	{
		system("COLOR 0A");
	COORD c;
	c.X=30;
	c.Y=10;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	}
	void centre1()
	{
		system("COLOR 0A");
	COORD c;
	c.X=35;
	c.Y=3;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	}
	void rcorner()
	{
		system("COLOR 0A");
	COORD c;
	c.X=50;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	}
	
	void display()
	{
		printf("\n\t\t\t***Please use KEYPAD to enter PIN***");
		printf("\n\n\t\t\t   (9)    (8)    (7)   (Enter)");
		printf("\n\n\t\t\t   (6)    (5)    (4)   (clear)");
		printf("\n\n\t\t\t   (3)    (2)    (1)   (cancel)");
		printf("\n\n\t\t\t   (+)    (0)    (#)   (EXIT)");
	}

	void rupcorner()
	{
		system("COLOR 0A");
	COORD c;
	c.X=50;
	c.Y=2;
	}


