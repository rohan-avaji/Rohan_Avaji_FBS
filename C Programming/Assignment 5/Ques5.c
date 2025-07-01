//Ques5. Print an inverted pyramid pattern

void main()
{
		int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Pyramid Pattern:\n");

    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }
}