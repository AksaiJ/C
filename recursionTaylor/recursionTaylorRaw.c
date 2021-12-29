#include <stdio.h>

double ePower(int x, int n) {
    static double f=1, p=1;
    double r;
    if (n == 0) return 1;
    else {
        r = ePower(x, n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}

int main()
{   int value; 
    int value2;
    scanf("%d %d",&value, &value2);
    printf("%lf \n",ePower(value, value2));
} 