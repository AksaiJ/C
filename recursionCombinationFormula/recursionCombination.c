#include <stdio.h>

int fact(int n){
    if (n == 0) return 1 ;
    return fact(n-1)*n;
}

int combByFact(int n, int r){
    int num, den; 
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}



int combinatin(int n, int r) {
    if ( r == 0 || n == r) return 1;
    else return combinatin(n-1, r-1) + combinatin(n-1,r);
}

int main () {

    printf("the combination is : %d \n", combinatin(4,3));
    printf("the combination is : %d \n", combByFact(4,3));
}
