package Assignment3;

public class Factorialnum {
	public static void main(String[] args)
	{
		int num=5;
		int i=1;
		int factorial=1;
		
		while(i <= num)
		{
			factorial=factorial*i;
			i++;
		}
		System.out.printf("Factorial of number %d : %d",num,factorial);
	}

}
