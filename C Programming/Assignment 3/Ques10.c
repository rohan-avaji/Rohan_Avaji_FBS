void main()
{
	int num=12345;
	int fdigit, ldigit;
	int sum=0;
	int i=0;
	while(i < num)
	{
		if(fdigit=num%10)
		
//			printf("%d",fdigit);
		
		ldigit=num/10000;
//		printf("%d",ldigit);
		sum = fdigit + ldigit;
		break;
	}
	printf("The sum of %d + %d is = %d",fdigit,ldigit,sum);
}