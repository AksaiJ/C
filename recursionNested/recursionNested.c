#include <stdio.h>
//returns 91 only for any value less than n
int funA(int n) {
     printf("%d entered function \n", n);

    if (n > 100) {
         printf("\t %d if block \n", n);
        return n-10;
       
        
    }
    else {
         printf("\t \t %d else block \n", n);
        return(funA(funA((n+11))));
    }
}


int main ()
{   int x = 0;
    scanf("%d",&x);
   printf("\n %d",funA(x));
    return 0;
}