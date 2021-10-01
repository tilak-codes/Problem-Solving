#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,max = 0,count = 0;
    
    scanf("%i\n",&n);
    int candles[n];
    for (int i = 0;i < n;i++) {
        scanf("%i",&candles[i]);
        if (candles[i] > max){
            max = candles[i];
        }
    }
    for (int i = 0;i < n;i++) {
        
        if (candles[i] == max){
            count += 1;
        }
    }
    printf("%i",count);
    return 0;
}
