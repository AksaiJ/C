//method 1
//use a another blank array to store string in reverse order as we parse
//the original string
// add /0 at end of array

#include <stdio.h>

int main(){
    char myString[] = "pythonnnnnnn";
    int totalCharacters = 0;

    for(int i=0; myString[i]!='\0'; i++){
        totalCharacters++;
    }


    char parsedMyString[totalCharacters] ; 
    // not best idea as C is statistically typed
    int j;

    for(j=0; myString[j]!='\0'; j++){

    }

    j = j-1;
    int k;
    for(k = 0; j>=0; j--, k++){
        parsedMyString[k]=myString[j];
    }

    parsedMyString[k]='\0';
    printf("%s", parsedMyString);
    
}