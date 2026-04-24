#include <stdio.h>
#include <string.h>

int main(int argc, char *args[]) {
    int n = argc;
    printf("%d\n",argc);
    // printf("%ld\n",sizeof(args)-1);

    for(int i=1;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if (strcmp(args[i],args[j])>0) {
                char * temp = args[i];
                args[i] = args[j];
                args[j] = temp;   
            }
        }
    }

   for(int i=1;i<argc;i++) {
    printf("%s\n",args[i]);
   } 
   return 0;
}