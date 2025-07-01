//Ques5.Write a menu driven program to take a number for user and perform operations as follows.
//Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

void main()
{
	int num, choice;
	char repeat='y';
	while(repeat=='y' || repeat=='Y')
	{
		printf("\n Menu:");
		printf("1.To check number is even or odd.\n");
		printf("2.To check number is prime or not.\n");
		printf("3.To check number is pallindrome or not.\n");
		printf("4.To check number is positive, negative or zero.\n");
		printf("5.To reverse a number.\n");
		printf("6.To find sum of digits.\n");
			
		printf("Enter a choice: ");
		scanf("%d",&choice);
		
		printf("Enter a num: ");
		scanf("%d",&num);
		
		//Press 1
		if(choice==1)
		{
			if(num%2==0)
			{
				printf("Even num");
			}
			else 
			{
				printf("odd num\n");
			}
		}
		
		// Press 2
		else if(choice==2)
		{
			int i=2, flag=1;
			if(num<=i)
			{
				flag=0;
			}
			else
			{
				while(i <=num/2)
				{
					if(num%i==0)
					{
						flag=0;
						break;
					}
					i++;
				}
			}
			if(flag==1)
			{
				printf("Prime num");
			}
			else
			{
				printf("Not a prime num\n");
			}
		}
		
		//Press 3
		else if(choice==3)
		{
			int temp, rem, rev;
			
			temp=num;
			while(num>0)
			{
				rem=num%10;
				num=num/10;
				rev=(rev * 10)+rem;
			}
			if(temp==num)
			{
				printf("Pallindrome num");
			}
			else
			{
				printf("Not a pallindrome num\n");
			}
		}
		
		//Press 4
		else if(choice==4)
		{
			if(num > 0)
			{
				printf("Positive num");
			}
			else if(num < 0)
			{
				printf("Negative num");
			}
			else if(num==0)
			{
				printf("Zero num");
			}
			else
			{
				printf("Invalid num\n");
			}
		}
		
		//Press 5
		else if(choice==5)
		{
			int temp, rem, rev;
			
			temp=num;
			while(temp> 0 )
			{
				rem=num%10;
				num=num/10;
				rev=(rev * 10)+rem;
			}
			printf("Reverse num= %d \n", rev);
		}
		
		//Press 6
		else if(choice==6)
		{
			int sum=0, rem;
			
			while(num>0)
			{
				rem=num%10;
				sum=sum+rem;
				num=num/10;
				
			}
			printf("Sum of digits = %d\n",sum);
		}
		else
			{
				printf("Invalid choice\n");
			}
			
			 printf("\nDo you want to try another option? (y/n): ");
        scanf(" %c", &repeat);
	}
	printf("\nProgram end");

}