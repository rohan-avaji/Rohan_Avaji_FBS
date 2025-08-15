package Assignment2;

public class EquilateralIsosScal {
	public static void main(String[] args)
	{
		int a=11;
		int b=11;
		int c=11;
		
		if(a == b && b == c)
		{
			System.out.printf("Equilateral");
		}
		else if(a == b || b == c || a == c)
		{
			System.out.printf("Isosceles");
		}
		else
		{
			System.out.printf("Scalen");
		}
	}

}
