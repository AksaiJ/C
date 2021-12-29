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

void DisplayDirect(struct  Arraydirect *arr) {
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

void InsertSort (struct Array *arr, int x){
    int i = arr->length -1;
    if(arr->length == arr-> size)
        return;
    while(arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

int isSorted(struct Array arr){
    int i = arr.length;for(i =0; i < arr.length; i ++){
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}

void Rearrange(struct Arraydirect *arr){
    int i, j;
    i = 0;
    j = arr->length-1;

    while(i < j){
        while(arr->A[i]<0)i++;
        while(arr->A[j] >= 0 )j--;  //done debugging, had put A[i] instead A[j]
        if(i < j )swap(&arr->A[j], &arr->A[i]);
    }
}

int MergeArray(struct Arraydirect *arr, struct Arraydirect *brr, struct Arraydirect *merged){ 
    int i=0,j=0,k=0;
    int ele = arr->length + brr->length;
    if(merged->size < (ele)) return -1;
    for(k = 0; k < ele; k++){
        if(arr->A[i] < brr->A[j]){
            merged->A[k] = arr->A[i];
            i++;
           if( i > arr->length ){
            while(j < brr->length){
            merged->A[k] = brr->A[j];
            j++; 
            k++;}
            k = ele;
            }
        }
        else {
            merged->A[k] = brr->A[j];
            j++;
            if( j > brr->length ){
                while(i < arr->length){
                merged->A[k] = arr->A[i];
                i++;
                k++; }
                k = ele;
            }
        }
    merged->length = ele;
    }

    //  struct Arraydirect array1 = {{3,6,1,8,0,2},30,6};
    // struct Arraydirect array2 = {{5,1,1,9,1,8},30,6}; 
    // for best solution copy from pdf 
    return 1;
}

struct Arraydirect *Merge(struct Arraydirect *arr1, struct Arraydirect *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Arraydirect *arr3 = (struct Arraydirect *)malloc(sizeof(struct
                                                                   Arraydirect));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}

struct Arraydirect *SetUnion(struct Arraydirect *arr1, struct Arraydirect *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Arraydirect *arr3 = (struct Arraydirect *)malloc(sizeof(struct
                                                                   Arraydirect));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else 
            arr3->A[k++] = arr2->A[i++];
            j++;
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct Arraydirect *SetIntersection(struct Arraydirect *arr1, struct Arraydirect *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Arraydirect *arr3 = (struct Arraydirect *)malloc(sizeof(struct
                                                                   Arraydirect));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if(arr2->A[j] < arr1->A[i])
            k++;
        else if (arr1->A[i] == arr2->A[j])
            arr3->A[k++] = arr2->A[i++];
            j++;
    }
   
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct Arraydirect *SetDifference(struct Arraydirect *arr1, struct Arraydirect *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Arraydirect *arr3 = (struct Arraydirect *)malloc(sizeof(struct
                                                                   Arraydirect));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j] < arr1->A[i])
           j++;
        else {
            i++;
            j++;
        }
    }
 
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}
int main(){
    int i;
   // int arraynormal[5];
   // int arraynormal2 [] = {2,3,4,5,5,5};
    // int *p;
    // p = (int *)malloc(sizeof(int)*5); // in c++ you replace with// new [5];
    // p[0] = 1;
    // p[1] = 2;
    // printf("%d %d",p[0], p[1]);

    // struct Arraytwo* arrtwo;
    // arrtwo = (struct Arraytwo* )malloc(sizeof(struct Arraytwo));
    //  for(i=0;i<arrtwo->length;i++){
    //     arrtwo->A[i] = i * 3;
    // }

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
    // Set(&arr1, 0, 100);
    // printf("\n  max %d min %d Get %d Sum %d Average %f ", Max(arr1), Min(arr1), Get(arr1, 0), Sum(arr1), Average(arr1));

    // Display(&arr1);

    // InsertSort(&arr1,20);
    // Display(&arr1);

    // printf(" is sorted %d \n",isSorted(arr1));
   
  //  struct Arraydirect Arraythreetwo = {{-1,2,-3,4,-5,6,-7,8,-9,-10,11},30,11};

    //  Rearrange(&Arraythreetwo);

    //  DisplayDirect(&Arraythreetwo);

    struct Arraydirect array1 = {{3,6,1,8,0,2},30,6};
    struct Arraydirect array2 = {{5,1,1,9,1},30,5};
    struct Arraydirect array3 = {{3,6,1,8,0,2},30,6};
    struct Arraydirect *array4;

    // MergeArray(&array1, &array2, &array3);
    // DisplayDirect(&array1);
    // DisplayDirect(&array2);
    // DisplayDirect(&array3);
    // printf("%d",array3.length);

    array4 = SetDifference(&array1,&array2);
    DisplayDirect(array4);

      return 0;
   

}
