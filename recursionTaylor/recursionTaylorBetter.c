 #include <stdio.h>
static double r= 1;
 double Recursion(double x, double n) {
    if (n == 0) return 0;
     r = (x/n)*r + 1 ;
     Recursion(x, n-1);
     return r;
 }

 double ForTaylor(double x, double n) {
     double result = 1;
    for( n; n >= 1; ) {
        result = ((result * x )/n) + 1;
        n = n -1;
    }
    return result;
 }

 int main() {
     printf("%lf \n",Recursion(1,10));
     printf("%lf \n",ForTaylor(1,10));
      printf("%lf \n",Recursion(2,10));
     printf("%lf \n",ForTaylor(2,10));
      printf("%lf \n",Recursion(3,10));
     printf("%lf \n",ForTaylor(3,10));
 }