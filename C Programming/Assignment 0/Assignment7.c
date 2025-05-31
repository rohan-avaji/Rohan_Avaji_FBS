void main()
{
	int min = 2451;
	int hr;
	
	hr = min / 60;
	printf("Hour:%d \n", hr);
	min = min % 60;
	printf("Remaining minute:%d", min);
}