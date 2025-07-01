//Ques1.Print armstrong numbers in the given range 1 to n

#include<stdio.h>
#include<math.h>
int main()
{
	int num, n, i, temp, rem,dig=0;
	int res=0;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	printf("Armstrong number between 1 to %d are: \n",n);
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
			res= res + pow(rem, dig);
			temp=temp / 10;
		}
		
	//Check if it is Armstrong
		if(res==num)
			printf("%d ",num);
		
	}
	return 0;
}