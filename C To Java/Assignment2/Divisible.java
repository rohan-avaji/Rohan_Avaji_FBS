package Assignment2;

public class Divisible {
	public static void main(String[] args)
	{
		int a = 7;
		
		if(a%3==0 && a%5!=0)
		{
			System.out.printf("%d divisible by 3 but not 5",a);
		}
		else if(a%3!=0 && a%5==0)
		{
			System.out.printf("%d divisible by 5 but not 3",a);
		}
		else if(a%3==0 && a%5==0)
		{
			System.out.printf("%d divisible by both",a);
		}
		else
		{
			System.out.printf("%d Divisible by none",a);
		}
	}

}
