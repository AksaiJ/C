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
    


//method 2
//we directly swap characters
// first we need to find length of string for that

char myString2[] = "python";
char reversedString[7];

int m, n;

for(n = 0; myString2[n]!='\0'; n++){

}

n = n-1;

for(m = 0; m < n; m++, n--){
    int t;
    t = myString2[m];
    myString2[m] = myString2[n];
    myString2[n] = t;
}

printf("\n %s", myString2);

}
