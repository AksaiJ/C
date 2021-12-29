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

int LinearSearch(struct Array *arr,int x){
    int i;
    for(i = 0; i < arr->length; i++){
        if ( arr-> A[i] == x) return i;
    }
    return -1;
}

int BinarySearch(struct Array *arr, int key){
    int low, mid, high;
    low =0;
    high = arr->length -1;

    while (low <= high)
    {
      mid = (low + high)/2;
      if (key == arr->A[mid])
        return mid;
      else if (key < arr->A[mid])
        high = mid -1 ;
        else low = mid + 1;
    
    }
    return -1;
}
//  WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING
// throws exception and memory heavy
// int RecursiveBinarySearch(struct Array *arr, int l, int h, int key){
//     int mid;
//      if (l <= h){
//          mid = (l+h)/2;
//          if (key == arr->A[mid])
//             return mid;
//         else if (key < arr->A[mid])
//             return RecursiveBinarySearch(arr, l, mid-1, key); }
//         else 
//             return RecursiveBinarySearch(arr, mid+1, h, key);
     
//      return -1;
// }
// WARNING WARNING WARNING WARNING WARNING WARNING WARNING

int main(){
    int i;
    int arraynormal[5];
    int arraynormal2 [] = {2,3,4,5,5,5};
    int *p;
    p = (int *)malloc(sizeof(int)*5);
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


    Display(&arr1);
    Append(&arr1, 100);
    printf("\n");
    Display(&arr1);

    Insurt(&arr1, 5, 10);
    Display(&arr1);

    printf("%d \n",Delete(&arr1,8));
    Display(&arr1);

    printf("\n Linear Search %d",LinearSearch(&arr1,9));
    printf("\n Linear Search %d",LinearSearch(&arr1,28));

    Display(&arrSorted);
    
    printf("\n Binary Search arr1 existing element%d",BinarySearch(&arr1,27));
    printf("\n Binary Search arr1 nonexistitng element %d",BinarySearch(&arr1,28));
    Insurt(&arr1, 0, 1000);
    printf("\n Binary Search arr1 number relatively higher than others element, should be -1 %d",BinarySearch(&arr1,1000));
    printf("\n Linear Search arrSorted existing element%d",LinearSearch(&arrSorted,27));
    printf("\n Binary Search arrSorted existing element %d",BinarySearch(&arrSorted,120));
    for(i=0;i<arrSorted.length;i++){
        printf("\n %d \t %d \t %d \n \t \n ----------------",i,arrSorted.A[i], BinarySearch(&arrSorted,arrSorted.A[i]));
    }
    // printf("\n Recursive Binary Search arrSorted existing element %d",RecursiveBinarySearch(&arrSorted,arrSorted.A[0], arrSorted.A[arrSorted.length], 27));
    // for(i=0;i<arrSorted.length;i++){
    //     printf("\n Rec%d \t %d \t %d \n \t \n ----------------",i,arrSorted.A[i], RecursiveBinarySearch(&arrSorted,arrSorted.A[0], arrSorted.A[arrSorted.length], arrSorted.A[i]));
    // }
    printf("\n Binary Search arrSorted nonexisting element%d",BinarySearch(&arrSorted,28));

    return 0;
}
