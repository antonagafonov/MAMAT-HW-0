// 123456789
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char string[1000];
    int *ptr;
    ptr = (int*)calloc(10,sizeof(int));

    FILE *fptr;
    if ((fptr = fopen("digit_freq.in", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", string);
    // printf("Data from the file:\n%s\n", string);
    fclose(fptr);

    int i, num;
    char c;
    for(i=0; string[i] != '\0';i++){
        // printf("i=%d\n",i);
        c = string[i];
        num = c - '0';
        if(num < 9 & num > -1){
            // printf("%d\n",num);
            ptr[num]+=1;
        }
    }
    int j;
    for(j=0;j<10;j++){
        printf("%d ",ptr[j]);
    }
    return 0;
}
