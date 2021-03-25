// 123456789
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n ;
    scanf("%d", &n);
    if (n > 100 || n < 1 ){
        return 0;
    }
    else{
    int arr[2*n-1][2*n-1] ;
    int num= 0;
    int i = 0;
    int j = 0;
    
    for (num = n ; num > 0; num--){
        for(i = n - num; i < 2*n - (n - num) - 1 ; i++){
            for(j = n - num; j < 2*n - (n - num) -1  ; j++){
                arr[i][j] = num;
            }
        }
    }
    
    for(i = 0; i < 2*n-1; i++) {
        for(j = 0; j < 2*n-1; j++) {
            printf("%d ", arr[i][j]);
    }
    printf("\n");
}

    return 0;
    }

}
