typedef struct Product
{
	int ProductId;
	char ProductName[50];
	int Quantity;
	double Price;
}Product;

#include<stdio.h>
void main()
{
	Product p1, p2, p3;
	
	printf("Details of Product 1 \n");
	p1.ProductId;
	printf("Productid is:");
	scanf("%d",&p1.ProductId);
	
	p1.ProductName;
	printf("Productname is: ");
	scanf("%s",p1.ProductName);
	
	p1.Quantity;
	printf("Quantity is: ");
	scanf("%d",&p1.Quantity);
	
	p1.Price;
	printf("Price is: ");
	scanf("%lf",&p1.Price);
	
	printf("Details of Product 2 \n");
	p2.ProductId;
	printf("Productid is:");
	scanf("%d",&p2.ProductId);
	
	p2.ProductName;
	printf("Productname is: ");
	scanf("%s",p2.ProductName);
	
	p2.Quantity;
	printf("Quantity is: ");
	scanf("%d",&p2.Quantity);
	
	p2.Price;
	printf("Price is: ");
	scanf("%lf",&p2.Price);
	
	printf("Details of Product 3 \n");
	p3.ProductId;
	printf("Productid is:");
	scanf("%d",&p3.ProductId);
	
	p3.ProductName;
	printf("Productname is: ");
	scanf("%s",p3.ProductName);
	
	p3.Quantity;
	printf("Quantity is: ");
	scanf("%d",&p3.Quantity);
	
	p3.Price;
	printf("Price is: ");
	scanf("%lf",&p3.Price);
	
	printf("Details of Product 1\n");
	
	printf("Productid is:%d",p1.ProductId);
	printf("\nProductname is:%s",p1.ProductName);
	printf("\nQuantity is:%d",p1.Quantity);
	printf("\nPrice is:%lf\n",p1.Price);
	
	printf("Details of Product 2\n");
	
	printf("Productid is:%d",p2.ProductId);
	printf("\nProductname is:%s\n",p2.ProductName);
	printf("\nQuantity is:%d\n",p2.Quantity);
	printf("\nPrice is:%lf\n",p2.Price);
	
	printf("Details of Product 3\n");
	
	printf("Productid is:%d",p3.ProductId);
	printf("\nProductname is:%s\n",p3.ProductName);
	printf("\nQuantity is:%d\n",p3.Quantity);
	printf("\nPrice is:%lf\n",p3.Price);

}