void checkloop();//dec
void main()
{
	checkloop();//call
}
void checkloop()//def
{
	int i=1;
	while(i <11)
	{
		printf("%d ",i);
		i++;
	}
}