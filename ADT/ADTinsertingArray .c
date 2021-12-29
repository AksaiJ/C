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
    int t = arr->length + 1;
    arr->A[t] = a;
    arr->length++;
    Display(arr);
    printf("________________________\n");
    // return arr;

}

// struct Array Insert(){

// }

int main(){
   
//      int B[] = {2,33,5,5,445,0};
//  struct Array arr1={malloc(sizeof(int)*10),10,10};
// struct Array arr1={B,10,10};

//     arr1.A = {0};
//    arr1.A = {0};
//     arr1.A = B;
//     Display(arr1);
 int i;
// struct Array *sp;
struct  Array arr1 = {(int *)malloc(sizeof(int)*20),20,10};
for(i=0;i<arr1.length;i++){
    arr1.A[i] = i * 3;
}
// sp = (struct Array *)malloc(sizeof(struct Array));

// *sp = arr1;
Display(&arr1);
Append(&arr1, 100);
printf("\n");
Display(&arr1);

//Display(*sp);




    return 0;
}
