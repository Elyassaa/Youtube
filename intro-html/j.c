#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char *str = "Hello";
    str[0] = 'h';
    printf("%s", str);
    return 0;
}
