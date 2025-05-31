void main() 
{
	int length, width, perimeter;
	
	printf("Length is:");
	scanf("%d", &length);
	
	printf("Width is:");
	scanf("%d", &width);
	
	perimeter = 2 * (length + width);
	printf("The perimeter is:%d", perimeter);
}