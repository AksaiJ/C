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

// int BinarySearch(struct Array *arr, int x){
//     int i,c;
//     i = arr->length/2;
//     for(c =0; c < 2*arr->length ; c++){
//         printf("\t O %d O0 \t",i);
//         if ( arr-> A[i] == x) return i;
//         else if (x < arr -> A[i] ) {
//             if(i%2 == 0) i=i/2;
//               else  i = (i -1)/2;}
//         else if (x > arr -> A[i]) {
//             if ((arr->length-1 - i)%2 == 0){
//                 i = (i   +(arr->length-1 - i)/2);
//             }
//             else {i =  ((arr->length-1 - i + 1)/2);}
//             }

//     }
//     return -1;
// }

// int BinarySearch(struct Array *arr, int x){
//     printf("\n");
//     int highlim = arr -> length -1, lowlim = 0, mid,i;
//      //mid = (highlim + lowlim)/2; //
//    for(i = 0; i < arr -> length; i++){
//        printf("\t low %d high %d ",lowlim, highlim);
//     //    if ((highlim - lowlim)%2 == 0) {
//         mid = (highlim + lowlim)/2; //
//     //    }
//     //    else {
//     //        mid = ((highlim + lowlim)/2 + 1) ;
//     //    }
//        printf(" mid %d ",mid);
//        if(arr -> A[mid] == x) return mid;
//        if (x < mid)
//        {
//            lowlim = mid + 1;
//            mid = highlim;

           
//        }
//        else if ( x > mid) {

//            // if((highlim - lowlim) == 0) //i=i/2;
// //               else  i = (i -1)/2;
//            highlim = mid - 1;
           
//        }
       

//    } return -1;
// }

int main(){
    int i;

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
    printf("\n Binary Search arrSorted nonexisting element%d",BinarySearch(&arrSorted,28));

    return 0;
}
