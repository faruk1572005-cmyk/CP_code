#include <stdio.h>

int main() {
    int n, i, j;
    long long sum = 0;
    
    // Read input
    
    scanf("%d", &n);
    
    // Calculate sum using formula: n(n+1)(n+2)/6
    sum = (long long)n * (n + 1) * (n + 2) / 6;
    
    // Print series
    printf("Series: ");
    if(n>0)printf("1");
    for(i = 2; i <= n; i++) { 
        printf("+(");
        for(j = 1; j <= i; j++) {
            printf("%d", j);
            if(j < i) printf("+");
        }
        printf(")");
    }
    
    // Print sum
    printf("\nSum: %lld\n", sum);
    
    return 0;
}