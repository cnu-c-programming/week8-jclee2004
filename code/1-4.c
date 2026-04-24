#include <stdio.h>

int  my_strcmp(const char *p, const char *q) {
    int result;
    for(int i=0;;i++) {
        if(p[i] =='\0') {
            return -q[i];
        }
        if(q[i] =='\0') {
            return p[i];
        }
        if(p[i] != q[i]) return p[i] - q[i];

    }
}

int main() {

    printf("%d\n",my_strcmp("abc","abcd"));
    printf("%d\n",my_strcmp("abc","abc"));
    printf("%d\n",my_strcmp("b","a"));

    return 0;
}