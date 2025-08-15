package Assignment2;

public class Marks {
	public static void main(String[] args)
	{
		int marks=89;
		
		if(marks >= 75)
		{
			System.out.printf("Marks is 75 above -> Distinction");
		}
		else if(marks >= 65)
		{
			System.out.printf("Marks is 65 above -> Final Class");
		}
		else if(marks >= 55)
		{
			System.out.printf("Marks is 55 above -> Second Class");
		}
		else if(marks >= 35)
		{
			System.out.printf("Marks is 40 above -> Pass Class");
		}
		else if(marks <= 35)
		{
			System.out.printf("Marks is less than 35 -> Fail");
		}
		else
		{
			System.out.printf("Not in memory");
		}
	}

}
