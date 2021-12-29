#include <stdio.h>
#include <Stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct  Array *arr) {
    int i;
    printf("\n Elements  / are \n");
    for (i = 0; i < arr->length; i++){
        printf("%u %d ", &arr->A[i], arr->A[i] );
    }
}
void Append(struct Array *arr, int a){
    if (arr -> length < arr -> size) {
    int t = arr->length;
    arr->A[t] = a;
    arr->length++;
    Display(arr);
    printf("________________________\n"); }
}
void Insurt(struct Array *arr,int index, int x){
    int i;
    if ( index >= 0 && index <= arr->length){
        for(i = arr-> length; i > index ; i--) {
        arr->A[i] = arr->A[i-1]; }
        arr-> A[index] = x;
        arr ->length++;
    }
}

int main(){
    int i;

    struct  Array arr1 = {(int *)malloc(sizeof(int)*20),20,10};
    for(i=0;i<arr1.length;i++){
        arr1.A[i] = i * 3;
    }
    Display(&arr1);
    Append(&arr1, 100);
    printf("\n");
    Display(&arr1);

    Insurt(&arr1, 5, 10);
    Display(&arr1);

    return 0;
}
