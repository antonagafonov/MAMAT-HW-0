// 123456789
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* "Doxygen" 

 * @brief This program drawing pattern of digits from biggest in outside of cube 
 * defined in input to 1 inside the cube for example for input 3 
 * the output looks  following:

    3 3 3 3 3 
    3 2 2 2 3 
    3 2 1 2 3 
    3 2 2 2 3
    3 3 3 3 3

 * @param argc No arguments
 * @param argv No arguments
 * @return returns 0
 * @note Function works with user input digit only 1<n<100
 */

int main() 
{
    /* define variable to hold the input */
    int n ;
    scanf("%d", &n);
    /* Check if input is a valid digit */
    if (n > 100 || n < 1 ) {
        return 0;
    } else {
    /* define array contains all the values */
    int arr[2*n-1][2*n-1] ;
    int num = 0;
    int i = 0;
    int j = 0;

    /* Go from biggest cube to smallest, write sequential digits from n to 1 */
    for (num = n ; num > 0; num--){
        for(i = n - num; i < 2*n - (n - num) - 1 ; i++){
            for(j = n - num; j < 2*n - (n - num) -1  ; j++){
                arr[i][j] = num;
            }
        }
    }
    /* print the array to users screen */
    for(i = 0; i < 2*n-1; i++) {
        for(j = 0; j < 2*n-1; j++) {
            printf("%d ", arr[i][j]);
    }
    printf("\n");
}

    return 0;
    }

}
