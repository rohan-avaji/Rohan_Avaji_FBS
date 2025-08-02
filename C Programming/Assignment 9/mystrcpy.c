char* mystrcpy(char* dest, const char* src);
void main() 
{
    char source[] = "Hello, World!";
    char destination[50];

    mystrcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

}

char* mystrcpy(char* dest, const char* src)
{
    char* ptr = dest;
    while (*src != '\0') {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}
