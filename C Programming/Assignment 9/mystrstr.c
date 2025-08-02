char* mystrstr(const char* haystack, const char* needle);
void main() 
{
    char str[] = "Hello from Pune";
    char sub[] = "Welcome";

    char* found = mystrstr(str, sub);
    if (found)
        printf("Found at: %s\n", found);
    else
        printf("Not Found\n");


}

char* mystrstr(const char* haystack, const char* needle) //def
{
    if (!*needle) return (char*)haystack;

    while (*haystack) {
        const char* h = haystack;
        const char* n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (!*n) return (char*)haystack;
        haystack++;
    }
    return NULL;
}

