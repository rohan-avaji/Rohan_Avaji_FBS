//Ques1.WAP to calculate selling price of book based on cost price and discount.
//(using function and nested if-else)

#include<stdio.h>
void discount(int );//dec
void main()
{
	int bookprice;
	printf("Enter a price of book:");
	scanf("%d",&bookprice);
	
	discount(bookprice);//call
}

void discount(int price)//def
{
	
	float sum=0;
	if(price >= 500 && price <= 900)
	{
		sum=price * 15 / 100;
		sum=price-sum;
		printf("You purchased a book of rupees %d and you will have to pay this much amount with include discount :%f",price,sum);
	}
	else if(price >= 5000 && price <=10000)
	{
		sum=price * 20 / 100;
		sum=price - sum;
		printf("You purchased a book of rupees %d and you will have to pay this much amount with include discount :%f",price,sum);
	}
	else 
	{
		printf("You will not get discount of this amount:%d",price);
	}
}