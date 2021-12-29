#include <stdio.h>


int main () {
int A[5];

int B[5] = {2,4,5,6,7};

int C[5] = {2,4};

int D[5] = {0}; // initiates all elements with 0 otherwise it has garbage values.

int E[] = {2,3,4,5,5,5}; 

int F[][5] = {{2,3,4,5,6},{2,3,4,5,6}};

int G[3][5] = {{2,3,4,5,6},{2,3,4,5,6},{3,5,7,9,11}};


printf("%d",B[2]);
printf("%d",2[B]);
printf("%d",*(B+2));

for(int i = 0; i < 5; i++) {
    printf("%u \n",&(*(A+i)));
}
return 0;

}