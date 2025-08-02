//Quese. mystrncpy

char* mystrncpy(char*, char*, int);//dec
void main() {
	char src[10]="RohanAvaji";
	char dest[10];
	
	mystrncpy(src, dest, 7);//call
	printf("Copied dest:%s",dest);
}

char* mystrncpy(char* src, char* dest, int n) { //def
	int i;
	for(i=0; i<n && src[i]!='\0'; i++)
	{
		dest[i]=src[i];
	}
	dest[i]!='\0';
	return dest;
}