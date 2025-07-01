//Ques10. Print a hollow square with diagonal pattern

void main()
{
	int n;

    printf("Enter size of square: ");
    scanf("%d", &n);

    printf("Hollow Square with Diagonals Pattern:\n");

    for (int i = 1; i <= n; i++) {        
        for (int j = 1; j <= n; j++) {    
            
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == (n - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}