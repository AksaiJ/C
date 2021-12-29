#include <stdio.h> 

int funRecursion(int n) {
    if ((n == 0 ) || (n == 1 ) || ( n < 0)) return 1;
    else { n = n * funRecursion(n -1);
    return n; }
    
}

int funLoop(int x) {
    int i = x, s = 1;
    for( i; i > 0; i--) {
        s = s* i;
    }
    return s;
}

int main () {
    int x;
    scanf("%d",&x);
    printf("%d \n %d",funRecursion(x),funLoop(x));
    
}