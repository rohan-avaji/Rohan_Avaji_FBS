package Assignment4;

public class Primeinrange {
	public static void main(String[] args)
	{
		int num, n=20, i;
		
		System.out.printf("Prime number between 1 to %d are: \n",n);
		
		//range of number
		for(i=1; i<=n; i++)
		{
			num=i;
			
		// condition check
		if(num%2==0)
		{
			System.out.printf("%d ",num);
		}
		}
	}

}
