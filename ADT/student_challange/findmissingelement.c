#include <stdio.h>

struct Array {

    int *A;
    int size;
    int length;

};

int findOneMissingEle(struct Array *arr){
    //for natural numbers order only, with only one difference
    int sum = 0, i, s;
    for(i = 0; i < arr->length ; i++){
        sum = sum + arr->A[i];
    }
    s = (arr->A[arr->length - 1] * ((arr->length - 1)+1))/2;

    if(s == sum) return -1;
    else return (sum - s);
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


int Delete (struct Array *arr, int index){
    int i, x = 0;
    if (index < arr->length ) {
        for(i = index; i < arr->length -1 ; i ++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length --;
    }
   x = arr ->A[i +1];
   arr->A[i+1] = 0;
   return x;
}



int main(){

    int i;
    struct Array *arr = (struct Array *)malloc(sizeof(struct Array));

    arr->A = (int *)malloc(sizeof(int)*20);
    arr->size = 20;
    arr->length = 10;

    for( i = 0; i < arr->length; i++){
        arr->A[i] = i+1;
    }
    for( i = 0; i < arr->length; i++){
    printf("%d ",arr->A[i]);
    }

    Delete(arr, 4);
    Insurt(arr,4,20);

    Delete(arr, 4);

    for( i = 0; i < arr->length; i++){
    printf("%d ",arr->A[i]);
    }

    printf("\n %d",findOneMissingEle(arr));



    return 0;




}

