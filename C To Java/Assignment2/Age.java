package Assignment2;

public class Age {
	public static void main(String[] args)
	{
		int age=34;
		
		if(age > 0 && age < 12)
		{
			System.out.printf("He/She is a child.");
		}
		else if(age > 12 && age < 19)
		{
			System.out.printf("He/She is a Teenager.");
		}
		else if(age > 20 && age < 59)
		{
			System.out.printf("He/She is a Adult.");
		}
		else
		{
			System.out.printf("He/She is a Senior.");
		}
	}

}
