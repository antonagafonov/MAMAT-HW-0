// 123456789
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Program returns frequency of digits from 0 to 9 from givet string
 * example:
 * input : lw4n88j12n1
 * output : 0 2 1 0 1 0 0 0 2 0
 * @param argc no argument
 * @param argv no argument
 * @return returns 0
 * @note exit with 1 if there is a problem to read a file
 */

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* define variable to hold the string input */    
    char string[1000];
    int *ptr;
    /* allocate memory to pointer varible to hol frequencies */ 
    ptr = (int*)calloc(10,sizeof(int));

    // /* open file to read the input and assign pointer to it*/
    // FILE *fptr;
    // if ((fptr = fopen("digit_freq.in", "r")) == NULL) {
    //     printf("Error! opening file");
    //     // Program exits if file pointer returns NULL.
    //     exit(1);
    // }

    // // reads text until newline is encountered
    // fscanf(fptr, "%[^\n]", string);
    // // close the file
    // fclose(fptr);
    // scans string from users STDIN
    scanf("%s", &string);

    // define variables
    int i,j, num;
    char c;

    // go througth the string until end of it ,increment by one
    for ( i = 0 ; string[i] != '\0'; i++) {
        // gets the char and checks if it a digit using ASCI
        c = string[i];
        num = c - '0';
        if(num < 9 & num > -1){
            // if varible num is a digit increce pointer in location of num by 1
            ptr[num]+=1;
        }
    }
    // print the answer to user`s screen
    for (j = 0; j < 10 ; j++) {
        printf("%d ",ptr[j]);
    }
    return 0;
}
