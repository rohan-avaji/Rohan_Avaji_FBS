//Ques8.Print a pattern of stars in diamond shape

void main()
{
	int n;
	
	printf("Enter a number:");
	scanf("%d",&n);

    printf("Diamond Star Pattern:\n");

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = i; j < n; j++) {
            printf(" ");
        }
       
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    
    for (int i = n-1; i >= 1; i--) {
        
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}