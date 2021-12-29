#include <stdio.h>

int FibonacciFunction(int x) {
    int result;
    if (x == 0) return 0;
    if (x == 1) return 1;
   
    result =  FibonacciFunction(x-1) + FibonacciFunction(x-2);
    printf("\n %d",result);
    return result;
}

int FibonacciLoop(int n) {
    int a = 0;
    int b = 1;
    int c = 0;
    int i = 1;
    if ( n <= 1) return n;
    for(i=1; i< n; i++) {
        if (i%3 == 1) { c = a + b; printf(" \n %d c",c);}
        if (i%3 == 2) { a = b + c; printf(" \n %d a",a);}
        if (i%3 == 0) { b = a + c; printf(" \n %d b",b);}
    }

    i--;
    switch (i%3)
    {
    case  1:
        return c;
        break;
    case 2:
        return a;
        break;
    case 0: 
        return b;
        break;
    default: 
        return 5050505;
    }
}

int main () {
    printf("\n \n \t %d ",FibonacciFunction(10));
    printf("\n \t%d", FibonacciLoop(10));
}