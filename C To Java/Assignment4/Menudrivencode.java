package Assignment4;

public class Menudrivencode {
	public static void main(String[] args)
	{
		int num=132, choice=5;

			System.out.printf("\n Menu:");
			System.out.printf("1.To check number is even or odd.\n");
			System.out.printf("2.To check number is prime or not.\n");
			System.out.printf("3.To check number is pallindrome or not.\n");
			System.out.printf("4.To check number is positive, negative or zero.\n");
			System.out.printf("5.To reverse a number.\n");
			System.out.printf("6.To find sum of digits.\n");
				
			
			//Press 1
			if(choice==1)
			{
				if(num%2==0)
				{
					System.out.printf("Even num");
				}
				else 
				{
					System.out.printf("odd num\n");
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
					System.out.printf("Prime num");
				}
				else
				{
					System.out.printf("Not a prime num\n");
				}
			}
			
			//Press 3
			else if(choice==3)
			{
				int temp, rem, rev=0;
				
				temp=num;
				while(num>0)
				{
					rem=num%10;
					num=num/10;
					rev=(rev * 10)+rem;
				}
				if(temp==num)
				{
					System.out.printf("Pallindrome num");
				}
				else
				{
					System.out.printf("Not a pallindrome num\n");
				}
			}
			
			//Press 4
			else if(choice==4)
			{
				if(num > 0)
				{
					System.out.printf("Positive num");
				}
				else if(num < 0)
				{
					System.out.printf("Negative num");
				}
				else if(num==0)
				{
					System.out.printf("Zero num");
				}
				else
				{
					System.out.printf("Invalid num\n");
				}
			}
			
			//Press 5
			else if(choice==5)
			{
//				System.out.println("Hello World!!!");
				int rem, rev=0;
				
				int temp=num;
				while(temp> 0 )
				{
					System.out.println("Hello World!!!");
					rem=num%10;
					num=num/10;
					rev=(rev * 10)+rem;
				}
				System.out.printf("Reverse num= %d \n", rev);
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
				System.out.printf("Sum of digits = %d\n",sum);
			}
			else
				{
				System.out.printf("Invalid choice\n");
				}
	}
}