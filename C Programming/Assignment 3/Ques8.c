void main() {
	int num=145;
	int rem, sum=0;
	int org = num;

	while(num !=0) {
		
		rem=num%10;
		int fact=1;
		while(rem>1) {
			fact=fact * rem;
			rem++;
		}
		sum = sum + fact;
		num = num/10;
	}
	if(sum==org)
	{
		printf("Strong num");
	}
	else
	{
		printf("Not strong");
	}

}