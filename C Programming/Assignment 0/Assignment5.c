void main()
{
	float num1, num2, num3, num4, num5, sum, average;
	
	printf("Enter five numbers:");
	scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
	
	sum = num1 + num2 + num3 + num4 + num5;
	
	average = sum / 5;
	printf("The average of five numbers is :%.2f", average);
}