#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int A[n] = {0};
   
    for(int i = 0; i < n/2; i++) {
        A[i] = i;
    }
   for (int i = 0; i < n; i++){
       printf("\n %d \n %d \n",*(A+i),i);
   }
}