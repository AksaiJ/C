#include <stdio.h>
#include <stdlib.h>

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

int findOneMissingElementNonZStart(struct Array *arr){
    int l = 0, diff = 0, h = 0, i = 0;
    diff = arr->A[i] - 0;
    for(i = 0; i < arr->length ; i++){
        if((arr->A[i] - i) != diff)
        {
            printf("\n missing element is %d \n", (i + diff));
            break;
        }
        printf("\n---------%d \t ele %d ",i, arr->A[i] );
    }
 return i + diff;
}


int findMoreMissingElementNonZStart(struct Array *arr){
    int l = 0, diff = 0, h = 0, i = 0;
    diff = arr->A[i] - 0;
    for(i = 0; i < arr->length ; i++){
        if((arr->A[i] - i) != diff)
        {   printf("\n missing element is %d \n", (i + diff));
            diff = arr->A[i] - i;
             h = arr->A[i-1]+2;
           
            while((h - i) != diff){
            printf("\n missing element is %d \n", (h));
            h++;

            }
            
        }
        printf("\n---------%d \t element is %d",i, arr->A[i]);
    }
 return 1;
}

int findDuplicatesSorted(struct Array *arr){
    int i, c=0;
    for(i = 0, c =0; i< arr->length-1; i++){
        if((arr->A[i] == arr->A[i+1])){
            if(c == 0) {
        printf("duplicate numbaer is %d", arr->A[i]); }
        c++;
        }
        else{ 
            c = 0;
        }
    }
}


int Max(struct Array *arr){
    int max = arr->A[0];
    int i;
    for(i =1; i < arr->length; i ++){
        if(arr->A[i]> max)
        max = arr->A[i];
    }
    return max;
}
int Min(struct Array *arr){
    int min = arr->A[0];
    int i;
    for(i =1; i < arr->length; i ++){
        if(arr->A[i]< min)
        min = arr->A[i];
    }
    return min;
}


int findMissingUnsorted(struct Array *arr){
    int *harry;
    int l, h, i;
    int max;
   max = Max(arr);
    harry = (int *)malloc(sizeof(int)*max);

    for(i = 0; i < max; i++){
        harry[i] = 0;
    }

    l = Min(arr);
    h = max;

    for(i = 0; i < arr->length; i ++){
        harry[arr->A[i]]++;
    }

    for(i = l; i <= h; i++){
        if(harry[i]==0)
        printf("missing element is -------%d \n",i);
    }
    
    return 1;
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

    arr->A = (int *)malloc(sizeof(int)*40);
    arr->size = 40;
    arr->length = 35;

    for( i = 0; i < arr->length; i++){
        arr->A[i] = i+1;
    }
    for( i = 0; i < arr->length; i++){
    printf("%d ",arr->A[i]);
    }

    Delete(arr, 4);
    Insurt(arr,4,20);

    Delete(arr, 4);


    printf("\n %d \n",findOneMissingEle(arr));

       for( i = 0; i < arr->length; i++){
        arr->A[i] = i+95;
    }
    
    for( i = 0; i < arr->length; i++){
    printf("\t %d \n",arr->A[i]);
    }

    Delete(arr, 5);
    Delete(arr, 7);
    Delete(arr, 7);
    Delete(arr, 7);
    Delete(arr, 15);
    Delete(arr, 20);
    Delete(arr, 24);
  

     for( i = 0; i < arr->length; i++){
    printf("\n %d \n",arr->A[i]);
    }

    findOneMissingElementNonZStart(arr);

    findMoreMissingElementNonZStart(arr);

    printf("\n \n \n \n making list unsorted \n");

    Display(arr);

    arr->A[0] = 1;
    arr->A[1] = 1;
    arr->A[2] = 1;
    arr->A[3] = 1;
    arr->A[4] = 2;
    arr->A[5] = 2;
    arr->A[6] = 3;
    arr->A[7] = 3;
    arr->A[8] = 3;

    printf("\n \n \n \n \n find duplicatesSorted function \n");
    findDuplicatesSorted(arr);



    printf(" \n \n \n \n \n \n \n making list unsorted  done\n \n \n \n");


        for( i = 0; i < arr->length/4; i++){
        arr->A[i] = arr->A[i]+95;
    }

    findMissingUnsorted(arr);


    return 0;




}

