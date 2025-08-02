void checkperfectnum();//dec
void main()
{
	checkperfectnum();//call
}
void checkperfectnum()//def
{
	int num=20;
	int sum=0;
	int i=1;
	
	while(i <=num/2)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==num)
	{
		printf("Perfect num");
	}
	else
	{
		printf("Not perfect num");
	}
}