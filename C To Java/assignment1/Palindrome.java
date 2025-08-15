package assignment1;

public class Palindrome {
	
	public static void main(String[] args)
	{
			int num=222;
			int temp=num;
			int rev=0;
			
			while(temp > 0)
			{
				int sum=temp%10;
				rev=rev * 10 + sum;
				temp=temp/10;
			}
			
			if(rev==num)
			{
				System.out.printf("Palindrome number");
			}
			else
			{
				System.out.printf("Not a palindrome number");
			}
		}
	}


