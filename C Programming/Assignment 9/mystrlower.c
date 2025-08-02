void main() 
{
    char str[] = "HeLLo WOrLD";
    mystrlower(str);
    printf("Lowercase: %s\n", str);
}

char* mystrlower(char* str) 
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}

