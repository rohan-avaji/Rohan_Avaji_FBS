package Assignment4;

public class Armstrongnuminrange {
	public static void main(String[] args)
	{
		int num=20, n=10, i, temp, rem,dig=0;
		int res=0;
		
		System.out.printf("Armstrong number between 1 to %d are: \n",n);
		// range of number
		for(i=1; i <=n; i++)
		{
			temp = i;
			num = i;
			dig=0;
			res=0;
			
		//Count digit
			while(temp != 0)
			{
				temp=temp / 10;
				dig++;
			}
			temp = num;
			
		//Calculate sum of pow of digit
			while(temp != 0)
			{
				rem= temp % 10;
				res= (int) (res + Math.pow(rem, dig));
				temp=temp / 10;
			}
			
		//Check if it is Armstrong
			if(res==num)
				System.out.printf("%d ",num);
			
		}
	}

}
