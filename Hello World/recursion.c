#include <stdio.h>
void fun(int n){
    if(n > 0)
    {printf("%d",n);
    fun(n-1);
    }
}
int main () {
    int x = 3;
    
    fun(x);
    scanf("%d",&x);
    printf("%d",x);


    return 0;
}