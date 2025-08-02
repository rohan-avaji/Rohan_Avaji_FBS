int mystrlen(const char* str);
void main()
{
    char str[] = "Rohan";
    int len = mystrlen(str);
    printf("Length: %d\n", len);
}
int mystrlen(const char* str) 
{
    int length = 0;
    while (*str++) length++;
    return length;
}
