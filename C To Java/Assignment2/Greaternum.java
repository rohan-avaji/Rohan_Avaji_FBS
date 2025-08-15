package Assignment2;

public class Greaternum {
	public static void main(String[] args)
	{
		int a=10, b=20, c=5;
		
		if(a>b)
		{
			if(a>c)
			{
				System.out.printf("A is greater");
			}
			else
			{
				System.out.printf("C is greater");
			}
		}
		else 
		{
			if(b>c)
			{
				System.out.printf("B is greater");
			}
			else
			{
				System.out.printf("C is greater");
			}
		}
	}

}
