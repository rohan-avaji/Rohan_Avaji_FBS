package Assignment4;

public class Stronginrange {
	public static void main(String[] args)
	{
		int num=10, dig, sum=0, factorial=1;
		int temp;
		
		System.out.printf("Strong number between 1 and %d are:",num);
		
		for(int i=1; i<=num; i++)
		{
			temp=i;
			sum=0;
			while(temp > 0)
			{
				dig = temp%10;
				
				factorial=1;
				for(int j=1; j<=dig; j++)
				{
					factorial = factorial*j;
				}
				sum = sum + factorial;
				temp = temp/10;
			}
				if(sum == i)
				{
					System.out.printf("%d ",i);
				}
		}
	}

}
