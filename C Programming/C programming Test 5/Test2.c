//Ques2.WAP to initialize some amount in your account. The give choice to user for deposite or withdraw.and display updated amount. Conditoin to withdraw(if the balacnce is less than 3000 display cant withdraw the amount balance is not sufficient).

#include<stdio.h>

void balance(int,int,int);//dec
void display(int,int,int);//dec
void main()
{
	int amt=5000;
	int deposite=0;
	int withdraw=0;
	printf("Balance in my account:%d",amt);
	
	balance(amt,deposite,withdraw);//call
	display(amt,deposite,withdraw);//call
	
}

void balance(int amt, int deposite, int withdraw)//def
{
	int choice;
	char repeat='y';
	while(repeat=='y' || repeat=='Y')
	{
		printf("\n1.Deposit:\n2.Withdraw:\n");
		
		printf("Enter a choice:");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("My current balance is:%d\n",amt);
			printf("Enter a deposite amount:");
			scanf("%d",&deposite);
			amt=amt + deposite;
			printf("Updated balance after deposite  is:%d",amt);
			
		}
		else if(choice==2)
		{
			printf("My current balance is:%d\n",amt);
			printf("Enter a withdraw amount:");
			scanf("%d",&withdraw);

			if(amt - withdraw < 3000)
			{
				printf("Can't withdraw. Balance is insufficient.\n");
			}
			else
			{
				amt=amt - withdraw;
				printf("Updated balance after withdraw  is:%d",amt);
			}
			
			
		}
		printf("\nDo you want to continue another option? (y/n): ");
        scanf(" %c", &repeat);
	}
}		
void display(int amt,int deposite, int withdraw)//def
{
	printf("\nFinal Balance: %d\n", amt);
    printf("Last deposit amount: %d\n", deposite);
    printf("Last withdraw amount: %d\n", withdraw);
}
	
