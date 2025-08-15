package assignment1;

public class Ques1 {
	
	public static void main(String[] args)
	{
		int num=7;
		int flag=0;
		
		for(int i=2; i<num; i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			System.out.printf("Num is prime");
		}
		else
		{
			System.out.printf("Num is not prime");
		}
	}

}
