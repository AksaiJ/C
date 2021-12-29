#include <stdio.h>
#include <Stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct  Array arr) {
    int i;
    printf("\n Elements are \n");
    for (i = 0; i < arr.length; i++){
        printf("%u %d ", &arr.A[i], arr.A[i] );
    }
}

int main(){

    int n, i;
    struct  Array arr;
    printf("enter size of an array \n ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(sizeof(int)*arr.size);
    arr.length = 0;

    printf("enter how many numbers \n");
    scanf("%d",&n);

    printf("enter all elements \n");
    for(i=0; i< n; i++){
        scanf("%d",&arr.A[i]);
        
    }
    arr.length = n;

    struct Array arrr2 = {{2,3,4,5,6},10,5}; // for future examples this will be used.


    Display(arr);


    return 0;
}
