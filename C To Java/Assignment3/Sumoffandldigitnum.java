package Assignment3;

public class Sumoffandldigitnum {
	public static void main(String[] args)
	{
		int num=12345;
		int fdigit = 0, ldigit = 0;
		int sum=0;
		int i=0;
		while(i < num)
		{
			fdigit=num%10;
			ldigit=num/10000;
			sum = fdigit + ldigit;
			break;
		}
		System.out.printf("The sum of %d + %d is = %d",fdigit,ldigit,sum);
	}

}
