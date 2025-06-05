//Q1.covert the time entered in hh, mm, and sec into total seconds.

void main()
{
	int hr = 2, min = 45, sec = 30;
	int totalSecond;
	
	totalSecond = (hr * 3600) + (min * 60) + 30;
	
	printf("TotalSecond is:%d",totalSecond);
}