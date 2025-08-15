package assignment1;

public class TotalSalary {
	public static void main(String[] args)
	{
		int basic = 2000;
		int da, ta, hra, totalSalary;
		
		if(basic <= 5000)
		{
			da = basic * 10;
			ta = basic * 15;
			hra = basic * 20;
		}
		else
		{
			da = basic * 15;
			ta = basic * 20;
			hra = basic * 30;
		}
		
		totalSalary = basic + da + ta + hra;
		
		System.out.printf("Total Salary is:%d",totalSalary);
	}

}
