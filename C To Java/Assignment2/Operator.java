package Assignment2;

public class Operator {
	public static void main(String[] args)
	{
		int num1=20, num2=30;
		int res;
		char oper='-';
		
//		System.out.printf("Enter a operator (+ - * /):");
		if(oper=='+')
		{ 
			res = num1 + num2;
			System.out.printf("%d",res);
		}
		else if(oper=='-')
		{
			res = num1 - num2;
			System.out.printf("%d",res);
		}
		else if(oper=='*')
		{
			res = num1 * num2;
			System.out.printf("%d",res);
		}
		else if(oper=='/')
		{
			res = num1 / num2;
			System.out.printf("%d",res);
		}
		else
		{
			System.out.printf("Invalid no");
		}
	}

}
