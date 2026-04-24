#include <stdio.h>

char * my_strcat(char *del, const char *src) {
    int i;
    for(i=0;;i++) {
        if(del[i] =='\0') {
            break;
        }
    }
    for(int j=0;;j++,i++) {
        del[i] = src[j];
        if(src[j] == '\0') break;
    }
    return del;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n",str1);
    my_strcat(str1,str2);
    printf("%s\n",str1);

    return 0;
}