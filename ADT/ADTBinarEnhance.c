#include <stdio.h>
#include <Stdlib.h>



struct Array {
    int *A;
    int size;
    int length;
};

struct Arraytwo {
    int A[30];
    int size;
    int length;
};

struct Arraydirect {
    int A[30];
    int size; 
    int length;
};


void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void Display(struct  Array *arr) {
    int i;
    printf("\n Elements  / are \n");
    for (i = 0; i < arr->length; i++){
        printf("%u %d ", &arr->A[i], arr->A[i] );
    }
}
int LinearSearch(struct Array *arr,int x){
    int i;
    for(i = 0; i < arr->length; i++){
        if ( arr-> A[i] == x) return i;
    }
    return -1;
}

int Get(struct Array arr, int index){
    if(index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;

}

int Set(struct Array *arr, int index, int x){
    if(index >= 0 && index < arr->length){
        arr->A[index] = x;
        return x;}
    return -1;
}

int Max(struct Array arr){
    int max = arr.A[0];
    int i;
    for(i =1; i < arr.length; i ++){
        if(arr.A[i]> max)
        max = arr.A[i];
    }
    return max;
}
int Min(struct Array arr){
    int min = arr.A[0];
    int i;
    for(i =1; i < arr.length; i ++){
        if(arr.A[i]< min)
        min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr){
    int s = 0;
    int i;
    for(i =0; i < arr.length; i++)
        s = s + arr.A[i];
    
    return s;
}

float Average(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

void Reverse(struct Array *arr){
    int *B;
    int i, j;

    B = (int *)malloc(arr-> length * sizeof(int));
    for(i = arr->length-1,j = 0; i>=0; i--, j++){
        B[j] = arr->A[i];
    
    }
    for(i=0; i<arr->length; i++){
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr){
    int i, j;
    for(i = 0, j = arr->length -1; i< j; i ++, j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}




int main(){
    int i;
    int arraynormal[5];
    int arraynormal2 [] = {2,3,4,5,5,5};
    int *p;
    p = (int *)malloc(sizeof(int)*5); // in c++ you replace with// new [5];
    p[0] = 1;
    p[1] = 2;
    printf("%d %d",p[0], p[1]);

    struct Arraytwo* arrtwo;
    arrtwo = (struct Arraytwo* )malloc(sizeof(struct Arraytwo));
     for(i=0;i<arrtwo->length;i++){
        arrtwo->A[i] = i * 3;
    }

    struct Arraydirect arraythree = {{2,3,4,5,6,7,8},30,7};
     for(i=0;i<arraythree.length;i++){
        arraythree.A[i] = i * 3;
    }

    struct  Array arr1 = {(int *)malloc(sizeof(int)*20),20,10};
    for(i=0;i<arr1.length;i++){
        arr1.A[i] = i * 3;
    }

    struct Array arrSorted = {(int *)malloc(sizeof(int)*50),50,12};
    for(i=0;i<arrSorted.length;i++){
        arrSorted.A[i] = i * 3;
    }
    Set(&arr1, 0, 100);
    printf("\n  max %d min %d Get %d Sum %d Average %f ", Max(arr1), Min(arr1), Get(arr1, 0), Sum(arr1), Average(arr1));

    Display(&arr1);
    Reverse(&arr1);
    Display(&arr1);

    Reverse2(&arr1);
    Display(&arr1);
    return 0;

 

}
