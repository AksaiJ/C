#include <stdio.h>

int sum(int x) {
    if (x > 0) {
    x = x + sum(x-1); }
    //else if (x == 0) { return 0;}
    return x;

}

int main () {
    int x;
    scanf("%d",&x);
    printf("%d",sum(x));
}

//this is for learning purpose of recurison only
//if you really want sum of n natural use the arithmatic progression formula for sum of first nautral numbers with interval. that's far more efficient
