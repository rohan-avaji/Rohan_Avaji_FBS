package Assignment4;

public class Perfectinrange {
	public static void main(String[] args)
	{
		int num=20;
		
		System.out.printf("Perfect number between 1 and %d are:",num);
		for(int i=1; i<=num; i++)
		{	
		 	int sum=0;
			int j=1;
			while(j <=i/2)
			{
					if(i % j==0)
				{
					sum=sum+j;
				}
			j++;
			}
				if(sum == i)
				{
					System.out.printf("%d ",i);
				}
		}
	}

}
