package Assignment3;

public class Primenum {
	public static void main(String[] args)
	{
		int num=21;
		int i=2;
		int flag=1;
		if(num <=1)
		{
			System.out.printf("Not a prime num");
			return;
		}
		
		while(i < num)
		{
			if(num % i==0)
			{
				flag=0;
				break;
			}
			i++;
		}
		
		if(flag==1)
		{
			System.out.printf("Prime num");
		}
		else
		{
			System.out.printf("Not a prime num");
		}
	}

}
