#include <stdio.h>

int fun(int n){
static int x = 0;

if (n > 0) {

    x++;
    return fun(n-1)+x;

}
      printf("%d x is , %d n is \n",x,n);
    return 0;
    printf("%d x is , %d n is \n",x,n);
}

int main() {
    int r;
    r = fun(5);
    printf("%d\n",r);
    r = fun(5);
    printf("%d\n",r);
     r = fun(5);
    printf("%d\n",r);
     r = fun(5);
    printf("%d\n",r);
    

    return 0;
}