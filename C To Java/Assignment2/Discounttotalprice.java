package Assignment2;

public class Discounttotalprice {
	public static void main(String[] args)
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
		
		System.out.printf("The actual price was :%.2f with total discount of :%.2f you have to pay :%.2f",price,discount,totalprice);
	}

}