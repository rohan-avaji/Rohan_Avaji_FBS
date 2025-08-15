package Assignment3;

public class Perfectnum {
	public static void main(String[] args)
	{
		int num=28;
		int sum=0;
		int i=1;
		
		while(i <=num/2)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}
			i++;
		}
		if(sum==num)
		{
			System.out.printf("Perfect num");
		}
		else
		{
			System.out.printf("Not perfect num");
		}
	}

}
