package Assignment3;

public class Sumofrange {
	public static void main(String[] args)
	{
		int start=3, end=5;
		int sum=0;
		while(start<=end)
		{	
			sum= sum + start;
			start++;
		}
		System.out.printf("Sum of range is: %d\n", sum);
	}

}
