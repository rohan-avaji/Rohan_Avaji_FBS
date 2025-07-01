//Ques3.Print an inverted right-angled triangle pattern
#include<stdio.h>
void main()
{
	int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);
	
 printf("Inverted right-angled triangle:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}