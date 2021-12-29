#include <stdio.h>
#include <stdlib.h>






int main() {

// method one direct initiallization

int A[3][5] = {{2,3,4,5,6},{2,3,4,5,6},{3,5,7,9,11}};

int B[][5] = {{2,3,4,5,6},{2,3,4,5,6},{3,5,7,9,11}};

// method two, inside heap using pointers, 
//only for c as c++ already has a new operator which you can use.

// A[][] = new [3][4];
//first create pointer array which will store adresses of another 3
//memory locations inside heap which can be assigned array size 
//topmost array layer in stack;
int *Pa[3];
// second step ..initialize it
// In c++ equivalent
// Pa[0] = new int[4];
// Pa[1] = new int[4];
// Pa[2] = new int[4];
// In c
Pa[0] = (int *)malloc(5*sizeof(int));
Pa[1] = (int *)malloc(5*sizeof(int));
Pa[2] = (int *)malloc(5*sizeof(int));


//Double pointer //everything in heap

int **p1; // created inside stack
//P1 = new int*[3];
// In c++ equivalent
//P1[0]= new int[4];
//P1[1]= new int[4];
//P1[2]= new int[4];
//In C
p1 = (int **)malloc(3*sizeof(int));
p1[0] = (int *)malloc(5*sizeof(int));
p1[1] = (int *)malloc(5*sizeof(int));
p1[2] = (int *)malloc(5*sizeof(int));


return 0; 
}