void checkfirstandlastdig();//dec
void main()
{
	checkfirstandlastdig();//call
}
void checkfirstandlastdig()//def
{
	int num=12345;
	int fdigit, ldigit;
	int sum=0;
	int i=0;
	while(i < num)
	{
		if(fdigit=num%10)
		ldigit=num/10000;
		sum = fdigit + ldigit;
		break;
	}
	printf("The sum of %d + %d is = %d",fdigit,ldigit,sum);
}