#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

////////////////Functions//////////////////
void manager();
void client();	
void man_options();
void login();
void custactivity();
void bankcredit();
void accdetail();
void loan();


///////////Structures//////////
struct data_of_customers{
	char fname[100];
	char lname[100];
	int phone;
	char address[100];
	int cnic;
	int accnum; //account number
	int pin; //PIN for activity
	int bal;
	int loan;
};

struct deposit_data{
	char name[100];
	int accnum;
	int amount;
};

struct witdraw_data{
	int pin;
	int ammount;
};



void manager() ///////////MANAGER PAGE FOR LOGIN USERNAME AND PASSWORD///////////////
{
	char admin[20];
	char pass[20];
	
	op:	//location
	system("cls");
	
	printf("\n\n\t\t\t Enter the Username and Password below:\n");
	printf("\t\t\t Username: ");
	scanf(" %[^\n]", admin);
	printf("\t\t\t Password: ");
	scanf(" %[^\n]", pass);
	
		if (strcmp(admin,"admin")==0 && strcmp(pass,"password")==0 )
			{
				man_options(); //manager options
			}
		else
			{
				printf("\n\t\t\tINVALID USERNAME OR PASSWORD!!!");
				printf("\n\t\t\tPress any key to try again ");
				getch();
				goto op;
			}
}

void man_options() //manager options
{
	int ch; //user choice
	
	line:
	system("cls");
	
	printf("\n\n\n\t\t\t What task do you want to perform? ");
	printf("\n\t\t\t 1. View Bank Credit ");
	printf("\n\t\t\t 2. View Customer Activity ");
	printf("\n\t\t\t 3. Return ");
	printf("\n\t\t\t Select any Choice ");
	scanf("%d", &ch);
	
	if (ch>0 && ch<4)
	{
		switch(ch)
		{
			case 1:{
				bankcredit();
				break;
			}
			case 2:{
				custactivity();
				break;
			}
			case 3:{
				login();
				break;
			}
		}
	}
	else 
		printf("\n\n\t\t\t INAVLID Input!! Please enter again");
		getch();
		goto line;
}

void custactivity() // option 2 for manager to see customer activity
{
	struct data_of_customers cust;
	FILE *ptr;
	system("cls");
	printf("\n\t\t\t\xB2\xB2 DSD BANK PAKISTAN \xB2\xB2\n");
	
	ptr=fopen("data.txt","r");
	
	printf("\n\nHere are the details of the customers\n\n");
	printf("-----------------------------------------------------------------------------------\n");
	printf("Account Number	Name	\tPhone	Email	\t\tCNIC	PIN\t	Balance	Loan\n");
	printf("------------------------------------------------------------------------------------\n");
	while(fscanf(ptr, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, 
			&cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		printf("%d		%s %s	 %d %s	 %d %d %d %d\n", cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, 
			cust.cnic, cust.pin, cust.bal, cust.loan);
	}	
}

void bankcredit() //option 1 for the manager to see bank credit 
{
	struct data_of_customers cust;
	FILE *ptr;
	system("cls");
	printf("\n\t\t\t\xB2\xB2 DSD BANK PAKISTAN \xB2\xB2\n");
	
	ptr=fopen("data.txt","r");
	int sum=0, loan=0;
	while(fscanf(ptr, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, 
			&cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		sum=sum+cust.bal;
		loan=loan+cust.loan;
	}
	
	printf("\n\tTotal Balance\t%d", sum);
	printf("\n\tTotal Loan\t%d", loan);
	
}

///////////// FUNCTIONS BELOW ARE OPTIONS THAT CLIENTS WILL SEE//////////////////

void loan() //option 8 for client to apply for loan
{
	struct data_of_customers cust;
	FILE *ptr;
	int amount, num;
	
	line:
	system("cls");
	printf("\n\t\t\t\xB2\xB2 DSD BANK PAKISTAN \xB2\xB2\n");
	
	printf("\nHow much amount of loan do you want? ");
	scanf("%d", &amount);
	
	printf("Enter your account number ");
	scanf("%d", &num);
	
	ptr=fopen("data.txt","r");
	int sum=0, loan=0;
	
	while(fscanf(ptr, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, 
			&cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		sum=sum+cust.bal;	
	}
	
	if (amount>sum)
	{
		printf("\nSorry! Bank does not have enough amout to give you loan of this amount...Please try again later ");
		getch();
		fclose (ptr);
		goto line;
	}
	else 
	{
		fclose(ptr);
		FILE *old=fopen("data.txt","r");
		FILE *newrec=fopen("new.txt","a+");
		
		while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, 
		&cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
		{
			if(num==cust.accnum)
			{
				fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n", cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, 
					cust.cnic, cust.pin, cust.bal, cust.loan+amount);
			}
			else
			{
				fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n", cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, 
					cust.cnic, cust.pin, cust.bal, cust.loan);
			}
		}
		printf("\nLOAN GIVEN SUCCESSFULLY");
		fclose(old);
		fclose(newrec);
		remove("data.txt");
		rename("new.txt","data.txt");	
	}
}
void transfer() //option 7 for client to transfer money to other accounts
{	
	struct data_of_customers cust;
	FILE *old, *newrec;

	int num,num2, amount,flag;
	char name[50], name2[50];
	
	line:
	system ("cls");

	old=fopen("data.txt", "r");
	newrec=fopen("new.txt", "a+");

	printf("\n\nEnter Your Accunt Number ");
	scanf("%d", &num);
	
	printf("\nEnter the Name of Your Account ");
	scanf("%s", name);
	fflush(stdin);
	
	printf("\nEnter the Recipients's Account Number");
	scanf("%d", &num2);
	
	printf("\nEnter the Recipient's Account Name");
	scanf("%s", name2);
	
	line2:
	printf("\nHow much amout do you want to Transfer ");
	scanf("%d", &amount);
	
	flag=0;
	
	while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, 
			&cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		fflush(stdin);
		if ((strcmp(name,cust.fname))==0 && cust.accnum==num)
			{
				if (amount>cust.bal)
				{
					printf("\n\tINSUFFICIENT BALANCE TRY AGAIN..");
					fclose(old);
					old=fopen("data.txt","r");
					getch();
					system("cls");
					goto line2;
				}
				flag++;
			}
		else if ((strcmp(name2,cust.fname))==0 && cust.accnum==num2)
			{
				flag++;
			}
		else if(flag==2)
		{
			fclose(old);
				break;
		}
	}
	
	if(flag!=2)
	{
		printf("\nInvalid Input, Any(one) of the Account is not present! ");
		fclose(old);
		fclose(newrec);
		fflush(stdin);
		goto line;
	}
	
	old=fopen("data.txt","r");
	
	
	while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, &cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		fflush(stdin);
		if ((strcmp(name,cust.fname))==0 && cust.accnum==num)
		{
			fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin, cust.bal-amount, cust.loan);
			printf("\n\nTransfer SUCCSSFUL!!\n Your new Balance is %d",cust.bal-amount);
			getch();
		}
		else if((strcmp(name2,cust.fname))==0 && cust.accnum==num2)
		{
			fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin, cust.bal+amount, cust.loan);
			getch();
		}
		else
		{
			fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic, cust.pin,cust.bal, cust.loan);
		}
	}
	
	fclose(old);
	fclose(newrec);
	remove("data.txt");
	rename("new.txt","data.txt");	
	
}

void bstatement() //option 6 for client to generate bank statemment
{
	struct data_of_customers cust;
	FILE *ptr;
	
	int num , pin, flag;
	
	line:
		
	ptr=fopen("data.txt","r");
	system("cls");
	printf("\n\nEnter the account number whose Bank statement you want to generate ");
	scanf("%d", &num);
	printf("\nEnter the PIN ");
	scanf("%d", &pin);
	
	flag=0;
	while(fscanf(ptr, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, 
		cust.address, &cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		if (pin==cust.pin && num==cust.accnum)
		{
			flag=1;
			printf("\nHere is the Bank_Statement.pdf\n");
			printf("\nTHE DSN BANK STATES THAT MR. %s %s has %d amount in his Bank Account, \nThe Person is certified to apply for any mortgage or admisssion in the threshhold of 10000 ", cust.fname, cust.lname, cust.bal);
			getch();	
			client();
		}
	}
		
	if (flag!=1)
	{
		printf("\nInvalid Account Number or PIN\nPlease enter again...");
		fclose(ptr);
		getch();
		goto line;
	}
	
}

void withdraw() //option 5 for client to withdraw some amount
{
	struct data_of_customers cust;
	FILE *old, *newrec;

	int num, amount,flag;
	char name[50];
	
	line:
	system ("cls");

	old=fopen("data.txt", "r");
	newrec=fopen("new.txt", "a+");

	printf("\n\nEnter the account number in which you want to deposit ");
	scanf("%d", &num);
	
	printf("\nEnter the Name of the Account ");
	scanf("%s", name);
	fflush(stdin);
	
	flag=0;
	
	while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, 
			&cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		fflush(stdin);
		if ((strcmp(name,cust.fname))==0 && cust.accnum==num)
			{
				flag=1;
				fclose(old);
				break;
			}
	}
	
	if(flag!=1)
	{
		printf("\nInvalid Input Account not present! ");
		fclose(old);
		fclose(newrec);
		fflush(stdin);
		goto line;
	}
	
	old=fopen("data.txt","r");
	
	printf("\nHow much amout do you want to withdraw? ");
	scanf("%d", &amount);
	
	while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, &cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		fflush(stdin);
		if ((strcmp(name,cust.fname))==0 && cust.accnum==num)
		{
			fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin, cust.bal-amount, cust.loan);
			printf("\n\nSUCCSSFUL!!\nThe new Balance is %d",cust.bal-amount);
			getch();
		}
		else
		{
			fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic, cust.pin,cust.bal, cust.loan);
		}
	}
	
	fclose(old);
	fclose(newrec);
	remove("data.txt");
	rename("new.txt","data.txt");
}

void deposit() //option 4 for client to deposit amount in his account
{
	struct data_of_customers cust;
	FILE *old, *newrec;

	int num, amount,flag;
	char name[50];
	
	line:
	system ("cls");

	old=fopen("data.txt", "r");
	newrec=fopen("new.txt", "a+");

	printf("\n\nEnter the account number in which you want to deposit ");
	scanf("%d", &num);
	
	printf("\nEnter the Name of the Account ");
	scanf("%s", name);
	fflush(stdin);
	
	flag=0;
	
	while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, 
			&cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		fflush(stdin);
		if ((strcmp(name,cust.fname))==0 && cust.accnum==num)
			{
				flag=1;
				fclose(old);
				break;
			}
	}
	
	if(flag!=1)
	{
		printf("\nInvalid Input Account not present! ");
		fclose(old);
		fclose(newrec);
		fflush(stdin);
		goto line;
	}
	
	old=fopen("data.txt","r");
	
	printf("\n\tHow much amout do you want to deposit? ");
	scanf("%d", &amount);
	
	while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, &cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		fflush(stdin);
		if ((strcmp(name,cust.fname))==0 && cust.accnum==num)
		{
			fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin, cust.bal+amount, cust.loan);
			printf("\n\nThe new Balance is %d",cust.bal+amount);
			getch();
		}
		else
		{
			fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic, cust.pin,cust.bal, cust.loan);
		}
	}
	
	fclose(old);
	fclose(newrec);
	remove("data.txt");
	rename("new.txt","data.txt");	
	
}

void update() //option 3 for cliet to update details of account
{
	struct data_of_customers cust;
	FILE *old, *newrec;

	int num, choice,ver;	//ver=verifity
	
	line:
	system ("cls");
	
	old=fopen("data.txt", "r");
	newrec=fopen("new.txt", "a+");

	printf("\n\nEnter the account number of the customer whose info you want to change ");
	scanf("%d", &num);
	printf("\nEnter the PIN of that account ");
	scanf("%d", &ver);
	
	int True=0;
	while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, &cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
	{
		fflush(stdin);
		if (cust.pin==ver && cust.accnum==num)
			{
				True=1;
				fclose(old);
				break;
			}
	}	

	if (True!=1)
		{
			printf("\n\n\tInvalid pin or number, please enter again... ");
			getch();
			fclose(old);
			fclose(newrec);
			goto line;
			fflush(stdin);
		}
		
		old=fopen("data.txt","r");
		
		wrongchoice:
		printf("\nWhat do you want to change?\n1. Acccount Number \n2. Mobile Number \n3. Email \n4. PIN\t");
		scanf("%d", &choice);
		
		if (choice<1 || choice>4)
		{
			printf("\n\n\tWrong Choice, Try again...");
			getch();
			system("cls");
			fflush(stdin);
			goto wrongchoice;
		}
		
		while(fscanf(old, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, &cust.phone, cust.address, &cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
		{
			if(cust.accnum==num)
			{
				if (choice==1)
				{
					int temp;
					printf("\nEnter new account Number ");
					scanf("%d", &temp);
					fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",temp, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin,cust.bal, cust.loan);
					printf("\n\tDetails Changed Successfully! New details are:\n");
					printf("-----------------------------------------------------------------------------------\n");
					printf("Account Number	Name	\tPhone	Email	\t\tCNIC	PIN\t	Balance	Loan\n");
					printf("------------------------------------------------------------------------------------\n");
					printf( "\n%d	\t%s %s	%d	%s	%d	%d	%d	%d\n",temp, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin,cust.bal, cust.loan);
				}
				else if(choice==2)
				{
					int temp2;
					printf("\nEnter new Mobile Number ");
					scanf("%d", &temp2);
					fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, temp2, cust.address, cust.cnic,cust.pin,cust.bal, cust.loan);
					printf("-----------------------------------------------------------------------------------\n");
					printf("Account Number	Name	Phone	Email	CNIC	PIN	Balance	Loan\n");
					printf("------------------------------------------------------------------------------------\n");
					printf( "\n%d	\t%s %s	%d	%s	%d	%d	%d	%d\n",cust.accnum, cust.fname, cust.lname, temp2, cust.address, cust.cnic,cust.pin,cust.bal, cust.loan);
				}
				else if(choice==3)
				{
					char email[50];
					printf("\nEnter new Email ");
					scanf("%s", email);
					fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, email, cust.cnic,cust.pin,cust.bal, cust.loan);
					printf("-----------------------------------------------------------------------------------\n");
					printf("Account Number	Name	Phone	Email	CNIC	PIN	Balance	Loan\n");
					printf("------------------------------------------------------------------------------------\n");
					printf( "\n%d	\t%s %s	%d	%s	%d	%d	%d	%d\n",cust.accnum, cust.fname, cust.lname, cust.phone, email, cust.cnic,cust.pin,cust.bal, cust.loan);
				}
				else if(choice==4)
				{
					int pin;
					printf("\nEnter the PIN ");
					scanf("%d", &pin);
					fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic, pin,cust.bal, cust.loan);
					printf("-----------------------------------------------------------------------------------\n");
					printf("Account Number	Name	Phone	Email	CNIC	PIN	Balance	Loan\n");
					printf("------------------------------------------------------------------------------------\n");
					printf( "\n%d	\t%s %s	%d	%s	%d	%d	%d	%d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic, pin,cust.bal, cust.loan);
				}
			}
			else 
			{
				fprintf(newrec, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin,cust.bal, cust.loan);
			}
			fflush(stdin);		
		}
	fclose(old);
	fclose(newrec);
	remove("data.txt");
	rename("new.txt","data.txt");		
}

void accdetail() //option 2 for client to see account details
{
	struct data_of_customers cust;
	FILE *ptr;
	
	int id, phone, choice,num;
	line:
	ptr=fopen("data.txt","r");
	system("cls");
	printf("\n\nDo you want to search your account with\n1.Account Num\n2.Phone Num");
	scanf("%d", &choice);
	printf("\nEnter the number ");
	scanf("%d", &num);
	
	
		while(fscanf(ptr, "%d %s %s %d %s %d %d %d %d\n",&cust.accnum, cust.fname, cust.lname, 
			&cust.phone, cust.address, &cust.cnic, &cust.pin, &cust.bal, &cust.loan)!=EOF)
		{
		if (num==cust.accnum || num==cust.phone)
		{	
			if (choice==1)				
			{
			printf("-----------------------------------------------------------------------------------\n");
			printf("Account Number\tName\tPhone\tEmail\t\tCNIC\tPIN\tBalance\tLoan\n");				
			printf("------------------------------------------------------------------------------------\n");
			printf("%d	%s %s	%d	%s	%d	%d	%d	%d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic, cust.pin, cust.bal, cust.loan);					
			fclose(ptr);
			getch();
			client(); //calling back the client function to show user the menu
			break;
			}
			else if (choice==2)
			{
				printf("-----------------------------------------------------------------------------------\n");
				printf("Account Number	Name	Phone	Email	CNIC	PIN	Balance	Loan\n");
				printf("------------------------------------------------------------------------------------\n");
				printf("%d	%s %s	%d	%s	%d	%d	%d	%d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic, cust.pin, cust.bal, cust.loan);
				fclose(ptr);
				getch(); //pause the screen
				client(); //go back to client function
				break;			
			}	
			else
			{
				printf("\n\t\tINVALID INPUT please enter again...");
				fclose(ptr);
				getch();
				goto line;	
			} 	
		}
	}
		printf("\n\t\tINVALID INPUT please enter again...");
			fclose(ptr);
			getch();
			goto line;				
}

void createacc() //option 1 for client to create an account
{
	system("cls");
		FILE *ptr;
		ptr=fopen("data.txt","a+");

		struct data_of_customers cust;
		printf("\n\n\n\t Enter Following Details ");
		
				printf("\t Account Number ");
				scanf("%d", &cust.accnum);
				
				printf("\n\n\t First Name ");
				scanf("	%s", cust.fname);
				
				printf("\n\t Last Name ");
				scanf("	%s", cust.lname);
				
				printf("\t Phone Number ");
				scanf("%d", &cust.phone);
				
				printf("\t Email Address ");
				scanf(" %s", &cust.address);
				
				printf("\t CNIC Number ");
				scanf("%d", &cust.cnic);
				
				printf("\t PIN ");
				scanf("%d", &cust.pin);
				
				printf("\t How much money do you want to deposit ");				
				scanf("%d", &cust.bal);
				cust.loan=0;
				fprintf(ptr, "%d %s %s %d %s %d %d %d %d\n",cust.accnum, cust.fname, cust.lname, cust.phone, cust.address, cust.cnic,cust.pin, cust.bal, cust.loan);
				
				printf("\n\n\t\tCONGRATULATIONS YOUR Account has been created!!\n\t\tPress any key to return");
				fclose(ptr);
				return;
}

void client() //client function
{
	int ch;

	line:
	system("cls");
	
	printf("\n\n\n\t\t\t What task do you want to perform?");
	printf("\n\t\t\t 1. Create a new account");
	printf("\n\t\t\t 2. View Details of account");
	printf("\n\t\t\t 3. Update Account");
	printf("\n\t\t\t 4. Deposit Money");
	printf("\n\t\t\t 5. Withdraw Money");
	printf("\n\t\t\t 6. Generate Bank Statement");
	printf("\n\t\t\t 7. Transfer Money");
	printf("\n\t\t\t 8. Apply for Loan");
	printf("\n\t\t\t 9. Return");
	printf("\n\n\t\t\t Enter Your Choice ");
	scanf("%d", &ch);
	
	if (ch>0 && ch<9)
	{
		system ("cls");
		switch (ch)
		{
			case 1:{
				createacc();
				getch();
				goto line;
	
				break;
			}
			case 2:{
			accdetail();
			//Function to view account details
			break;
			}		
			case 3:{
				update();
				//Update Account Function
				break;
			}
			case 4:{
				deposit();
				goto line;
				break;
			}
			case 5:{
				withdraw();
				goto line;
				break;
			}
			case 6:{
				bstatement();
				goto line;
				break;
			}
			case 7:{
				transfer();
				goto line;
				break;
			}
			case 8:{
				loan();
				break;
			}
			case 9:{
				login();
				break;
			}	
		}
	}
	else 
	{
		printf("\n\n\t\t\tINVALID INPUT!! Enter Again");
		goto line;
	}
}

///////////// FUNCTIONS ABOVE ARE OPTIONS THAT CLIENTS WILL SEE//////////////////


void login() ///////////LOGIN ON PAGE 1////////////////////
{
	int ch; //choice 
	
	choice: //location 1
	system ("cls");	
	printf("\n\n\t Please Choose Among Following Options:\n");
	printf("\n\t\t 1. Manager");
	printf("\n\t\t 2. Client");
	printf("\n\t\t 3. Exit");
	printf("\n\t\t Select any one choice from above ");
	scanf("%d", &ch);
	
	if (ch>3 || ch<1)
	{	
		printf("\n\t\t INVALID CHOICE!!!! \n\t\t Press any key to enter the choice again ");
		getch();
		goto choice;
			}	
	
	switch (ch){
		case 1:{

			manager();
			break;
		}
		case 2:{
			client();
			break;
		}
		case 3:{
			exit(0);
			break;
		}		
	}	
}

///////////// BELOW IS MAIN FUNCTION////////////////
int main() //main function
{
	printf("\n\n\n\t\t\t\xB2Welcome To DSD BANK\xB2");
	printf("\n\n\t\t\tPlease any key to Continue....");
	getch();
	login();
}