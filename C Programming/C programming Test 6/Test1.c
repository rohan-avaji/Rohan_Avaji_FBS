//Ques1 WAP in C for, to find common elements in two arrays.

void main() {
	int arr[5];
	int brr[5];
	int i, j;
	
	printf("Enter a number of arr:\n");
	for(int i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}
	
	printf("Enter a number of brr:\n");
	for(int i=0; i<5; i++) {
		scanf("%d",&brr[i]);
	}
	
	printf("\nCommon elements are:");
	for(int i=0; i<5; i++) {

		for(int j=0; j<5; j++) {

			if(arr[i]==brr[j]) {
				printf("%d",arr[i]);
				break;
			} 
			
		}

	}


}