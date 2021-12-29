#include <stdio.h>
int f[100];
int Recursion(int n){
   if (n <= 1){
       f[n] = n;
       return n; 
   }
   else if (f[n-2]== -1) {
       f[n-2] = Recursion(n-2);
   }
        if (f[n-1] == -1) {
        f[n-1] = Recursion(n-1);
}
f[n] = f[n-2] + f[n-1];
return f[n]; 
}

int rfib(int n) {
    if (n <= 1) return n;
    return rfib(n-2)+rfib(n-1);
}

int RecursionLoop(int n) {
int t0=0, t1= 1, s=0, i;
if (n <= 1) return n;

for( i =2; i<=n; i++) {
    s = t0 + t1;
    t0 = t1;
    t1 = s;
}
 
    return s;
}

int main()
{   int i;
    for(i=0; i<100; i++) {
        f[i] = -1;
    }
    printf("%d with memonized recursion function \n ",Recursion(6));
    printf("%d with no memo recursion \n",rfib(6));
    printf("%d with Iterative Loop",RecursionLoop(6));
}
