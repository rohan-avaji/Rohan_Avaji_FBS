void main()
{
	int seatno1 = 27;
	int seatno2 = 23;
	int temp;
	
	printf("Before swapping seatno1 = %d and seatno2 = %d \n", seatno1, seatno2);
	
	temp = seatno1;
	seatno1 = seatno2;
	seatno2 = temp;
	
	printf("After swapping seatno1 = %d and seatno2 = %d", seatno1, seatno2);
}