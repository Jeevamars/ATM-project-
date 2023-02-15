#include<stdio.h>
#include<stdlib.h>
#include"Allheader.h"
int pin;
int create_account()
{
	
	int password,num,num1;
	char name[100],fname[100],mname[100];
	char acc_name[100],acc[100];
	char str1[20]=".txt";
	date();
	printf("***CREATE ACCOUNT***");
	printf("\n\n\n\t\t\tEnter username to create account:");
	scanf("%s",&acc_name);
	printf("\n\n\nEnter ATM Pin to create account:");
	scanf("%d",&password);
	system("cls");
	if(pin==password)
	{
	sprintf(acc,"%s%s",acc_name,str1);
	FILE *fptr;
	fptr=fopen(acc,"w");
	if(fptr==NULL)
	{
		printf("Error!=");
		exit(1);
	}
	printf("Enter the name:");
	fprintf(fptr,"Full name:");
	scanf("%s",name);
	fprintf(fptr,"%s",name);
	printf("\nEnter the Father's name:");
	fprintf(fptr,"\n\nFather's name:");
	scanf("%s",fname);
	fprintf(fptr,"%s",fname);
	printf("\nEnter the Mother's name:");
	fprintf(fptr,"\n\nMother's name:");
	scanf("%s",mname);
	fprintf(fptr,"%s",mname);
	printf("\nEnter the Phone number:");
	fprintf(fptr,"\n\nPhone number:");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	printf("\nEnter the AADHAR number:");
	fprintf(fptr,"\n\nAADHAR number:");
	scanf("%d",&num1);
	fprintf(fptr,"%d",num1);
	system("cls");
	printf("\n\n\t\t\2Thanks for the details Your account is created within 3 days\2");
	printf("\n\n\n\t\t\t   \2  Thank you for using ATM  sevice  \2");
}
else
{				
				date();
				centre();
				printf("passord incorrect");
				printf("\n\n\n\t\tPlease remove the ATM card and *TRY AGAIN*");
				printf("\n\n\n\t\t   \2  Thank you for using ATM  sevice  \2");
			}

}

