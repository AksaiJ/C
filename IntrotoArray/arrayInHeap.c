#include <stdio.h>
#include <stdlib.h>



int main () {

    int A[5] = { 2, 4, 6, 8, 10};
    int *p;
    p = (int *)malloc(sizeof(int)*5);

    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for(int i = 0; i < 5; i++){
        printf("%d A \n",A[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%d p \n",p[i]);
    }
    printf("\n");printf("\n");printf("\n");
    // changing array size 

  // first step // take new pointer
    int *q = (int *)realloc(p, sizeof(int)*10);

    printf("\n %u",&(*q));
    printf("\n %d",q);
    printf("\n %u",q);
    printf("\n %u",&(*q));

      for(int i = 0; i < 10; i++){
        printf("%d q \n",q[i]); }

    int *q2 = (int *)malloc(15*sizeof(int));


    // or

    //int *r = new int[10];
  //second step  //then copy individual values with for loop

  for(int i=0; i < 10; i++){
      q2[i] = q[i]; // copying from q to q2
  }
  // checking copied values, not step
    for(int i = 0; i < 15; i++){
        printf("%d q2 \n",q2[i]);
    }
 q = q2;
 q2 = NULL;
      for(int i = 0; i < 15; i++){
        printf("%d q \n",q[i]);
    }


 printf("\n");


  // third step // point p to q

p = q;
q = NULL;



  // assign null to q.
  // done. p is pointing to array which was being pointed by q.

    return 0;
}
// In c we can do dynamic programming with malloc or calloc
// for assigning, calloc takes first parameter as number of values
// calloc also initiates values at 0
// realloc for reassigning with a new size takes two parameters
// first old pointer name and size of new heap variable.
// free for freeing up from heap

// In Cpp tho we can just create new heap array with new keyword
//int A = new []; (n0t sure) or

// int *p;
// p = new int[5];


// this creates a new array of defined size in bracket in heap.
// if some funciton is making too much heap it called memory leak.


// deallocation

// C++
// delete []p;

//C
// free(p);