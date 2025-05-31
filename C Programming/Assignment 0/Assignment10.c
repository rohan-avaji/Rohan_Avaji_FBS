void main()
{
	int Eng, Math, Chem, Bio, Phy, totalmarks;
	float percentage;
	
	printf("Enter the marks of English:");
	scanf("%d",&Eng);
	
		printf("Enter the marks of Math:");
	scanf("%d",&Math);
	
		printf("Enter the marks of Chemistry:");
	scanf("%d",&Chem);
	
		printf("Enter the marks of Biology:");
	scanf("%d",&Bio);
	
		printf("Enter the marks of Physics:");
	scanf("%d",&Phy);
	
	totalmarks = Eng + Math + Chem + Bio + Phy;
	percentage = (totalmarks / 500.0) * 100;
	
	printf("Total marks of student is:%d\n", totalmarks);
	printf("Percentage of student is:%.2f", percentage);
	
}