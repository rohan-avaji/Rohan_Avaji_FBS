void checktotal();//dec
void main()
{	
	checktotal();//call
}
void checktotal()//def
{
	double price=500;
	char isstudent='n';
	double totalprice;
	double discount=0;
	if(isstudent=='y')
	{
		if(price >= 500)
		{
			discount=price*0.20;
			totalprice=price-discount;
		}
		else 
		{
			discount=price*0.10;
			totalprice=price-discount;
		}
	}
	else
	{
		if(price >=600)
		{
			discount=price*0.15;
			totalprice=price-discount;
		}
		else
		{
			totalprice=price;
		}
	}
	
	printf("The actual price was :%.2lf with total discount of :%.2lf you have to pay :%.2lf",price,discount,totalprice);
}