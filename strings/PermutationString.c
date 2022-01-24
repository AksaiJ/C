#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


    char * tooggleCase(char *charray){
        int i;
        // printf("------%s",charray);
        // printf("%c",charray[0]);
        for(i = 0; charray[i] != '\0'; i++){
            if (charray[i] >= 65 && charray[i] <=90){
                charray[i] = charray[i] + 32;
            }
            else if (charray[i] >= 'a' && charray[i] <= 'z'){
                charray[i] = charray[i] - 32;
            }
        }
        //  printf("\n------%s",charray);
        return charray;

    }   



    char * stringToHeap(char *string){
         char *mover = malloc(sizeof(char)*100);
        int i = 0;
        while(string[i]!= '\0'){

        mover[i] = string[i];
        i++;
    }
        mover[i+1] = '\0';
        return mover;
    }

     char * stringToHeap2(char *string){
         char *mover = malloc(sizeof(char)*100);
        int i = 0;
        while(string[i]!= '\0'){

        mover[i] = string[i];
        i++;
    }
     
        return mover;
    }

    int countvowels(char *charayy){
        int i = 0;
        int count = 0;
        while(charayy[i] != '\0'){
            switch (charayy[i])
            {
           case 'a':
            count++;
                break;
            case 'A':
            count++;
                break;
            
            case 'e':
            count++;
                break;
            case 'E':
            count++;
                break;
            
            case 'i':
            count++;
                break;
            case 'I':
            count++;
                break;
            
            case 'o':
            count++;
                break;
            case 'O':
            count++;
                break;
            
            case 'u': count++;
                break;
            case 'U':
                count++;
                break;
            
            default:
                break;

            }
            i++;
        }
        printf("\n vowels are %d",count);
        return count;
    }
       int countconsonants(char *charayy){
        int i = 0;
        int count = 0;
        while(charayy[i] != '\0'){
            switch (charayy[i])
            {
            case 'a':
            count++;
                break;
            case 'A':
            count++;
                break;
            
            case 'e':
            count++;
                break;
            case 'E':
            count++;
                break;
            
            case 'i':
            count++;
                break;
            case 'I':
            count++;
                break;
            
            case 'o':
            count++;
                break;
            case 'O':
            count++;
                break;
            
            case 'u': count++;
                break;
            case 'U':
                count++;
                break;
            
            default:
                break;
            }
            i++;
        }
        printf("\n consonants are : %d",(i-count));
        return i - count;
    }
int countwords(char *string) {

    int c = 0; int i= 0;
      while(string[i]!= '\0'){
          if (string[i] == ' ')
          { if(string[i-1] != ' '){
              c++;}
          }
          i++;
          

    }
    printf("\n total words are: %d",c);
    return c;

}
int countLetters(char *string){
    int i = 0;
      while(string[i]!= '\0'){
         i++;
          }
    printf("\n total letters are : %d",i);
    return i;
}

void printParaStat(char *string){
    countvowels(string);   
    countconsonants(string);
    countwords(string);
    countLetters(string);
}

int validateUsername(char * string){
    bool isUsername = false;
    int i;
    for(i = 0; string[i] != '\0'; i++){
        if(!(string[i] <= 65 && string[i] == ' ' && string[i] <= 90) && !(string[i] >= 97 && string[i] <= 122)){
            printf("\n please enter a valid username \n");
            return 0;
        }
        // else {printf("\n Username okay ! ");
        // isUsername = true;
        // printf("%d \n ",isUsername); }

    }
       {printf("\n Username okay ! ");
        isUsername = true;
        printf("%d \n ",isUsername); }
    return 1;
}

char *reverserString(char *charray){
    char *mover2 = malloc(sizeof(char)*30);

    int i = 0; int j = 0;
    while(charray[i] != '\0'){
        i++;
        }
        j=j-1;
    for(j = 0; charray[j] != '\0'; j++ ){
        mover2[j] = charray[i];
        i--;
        
    }
    mover2[j+1] = '\0';

    return mover2;
}

void reverseString(char * charray){
    int i = 0; int j = 0; int t;
    for(j = 0; charray[j] != '\0'; j++){

    }
    j = j - 1;
    for(i = 0; i < j; i++, j--){
        t = charray[i];
        charray[i] = charray[j];
        charray[j] = t;
    }
}

char * reverseStringReturn(char * charray){

    char * returner = stringToHeap(charray);
    int i = 0; int j = 0; int t; int p;
    for(j = 0; charray[j] != '\0'; j++){

    }
    p = j;
    j = j - 1;
    for(i = 0; i < j; i++, j--){
        t = returner[i];
        returner[i] = returner[j];
        returner[j] = t;
    }
 
    returner[p] = '\0';
    return returner;
}
int CompareStrings(char *string, char *string2){
    int i=0;
    while((string[i] != '\0')&&(string2[i] != '\0')){
        if(string2[i] != string[i]){
            return -1;
        }
    i++;
    }
    return 1;
}

int CompareByAlphabets(char *string, char* string2){
    int i = 0, j = 0;
    for(i=0, j=0; (string[i] != '\0') && (string2[j] != '\0'); i++, j++){
    if(string[i] != string2[j]){
            break;
        }
    }
    if(string[i] == string2[j]){
        printf("\n true equl");
        return 1;
    }
    else if(string[i] < string2[j]){
        printf("\n string one less");
        return -1;
    } 
    
    else {
        printf("\n string two more");
        return 1;
    }
    
}

int compareStringCaseInsensitive(char *string1, char *string2){

    int i = 0; int j = 0;
     while(string1[i] != '\0'){
    if (string1[i] >= 'a' && string1[i] <= 'z'){
                string1[i] = string1[i] - 32;
            }
        i++;
     }

    i = 0;
    while(string2[i] != '\0'){
    if (string2[i] >= 'a' && string2[i] <= 'z'){
                string2[i] = string2[i] - 32;
            }
        i++;
    }


        for(i=0, j=0; (string1[i] != '\0') && (string2[j] != '\0'); i++, j++){
    if(string1[i] != string2[j]){
            break;
        }
    }
    if(string1[i] == string2[j]){
        printf("\n true equl");
        return 1;
    }
    else if(string1[i] < string2[j]){
        printf("\n string one less");
        return -1;
    } 
    
    else {
        printf("\n string two more");
        return 1;
    }
    
}

int palindromString(char *string){

    //does not work correctly
    char * reversed = stringToHeap2(string);
    printf("\n %s", reversed);
    reverseString(reversed);
    printf("ok ? \n %s ",reversed);

    int i = 0; int j; int k;

    while(string[i] != '\0'){
        j = string[i];
        k = reversed[i];
        if(k != j){
            printf("\n strind is not palindrome");
            return -1;
        }

        i++;
    }
    printf("\n string is palindrome\n");
    return 1;
}


int duplicatePrinterUsingBits (char *string){
    int i;
    long int H = 0, x = 0;
    for(i = 0; string[i] != '\0'; i++){
        x = 1;
        x = x << (string[i] - 97);

        if((x & H) > 0){
            printf(" \n duplicate number is %c \n",string[i]);
        }
        else H = x | H;
    }
    return 1;
}

int AnagramChecker (char *string1, char *string2){
    int a = countLetters(string1);
    int b = countLetters(string2);
    if ( a!= b) return -1;

    int i = 0;
    int H[128] = {0};
    while(string1[i] != '\0'){
    if (string1[i] >= 65 && string1[i] <=90){
                string1[i] = string1[i] + 32;
            }
    i++;
    }

    i = 0;

    while(string2[i] != '\0'){
     if (string2[i] >= 65 && string2[i] <=90){
        string2[i] = string2[i] + 32;
      }
    i++;
    }

    i =0;

    for(i = 0; string1[i] != '\0'; i++){
    // H[A[i]-97]+=1;
    H[(int)string1[i]]+=1;

    }
    for(i = 0; string2[i] != '\0'; i++){
        H[(int)string2[i]]-=1;
        if(H[i]<0){
            printf("\n not Anagram");
            break;
            return 0;
        }
    }

    for(i = 0; i < 129; i++){
            if(H[i] > 0) {
                printf("\n not anagram ");
                return 0;
            }
    }
    printf("\n these two are anagram\n");
    return 1;  
}

void stringPermutationsPrinter(char * string, int k){
    static int Array[10] = {0};
    static char Result[10];
    int i;

    switch(k){
        case 0 :  printf("\n \n k is %d",k); break;

        case 1 :  printf("\n \n \t k is %d",k); break;

        case 2 :  printf("\n \n \t \t k is %d",k); break;

         case 3 :  printf("\n \n \t \t \tk is %d",k); break;

    }
    //   printf("\n k is %d",k);
   if(string[k] == '\0'){
       Result[k] = '\0';
       printf("\n %s",Result);
   }

   else {

       for(i=0; string[i] != '\0'; i++){
           printf("\n \t i is %d and k is %d",i,k);
           if(Array[i] == 0){
                 printf(" \n \t \t \tarray of i is zero value is %c",string[i]);
               Array[i] = 1;
               Result[k] = string[i];
               printf("\n \t \t \t %s result is (after processing)", Result);
               stringPermutationsPrinter(string, k+1);
               Array[i] = 0;
               
    switch(k){
        case 0 :  printf("\n \n came out of k %d  assigned array %d  place value 0", k+1, i); break;

        case 1 :  printf("\n \n \t came out of k %d  assigned array %d  place value 0", k+1, i); break;

        case 2 :  printf("\n \n \t \t came out of k %d  assigned array %d  place value 0", k+1, i); break;

         case 3 :  printf("\n \n \t \t \tcame out of k %d  assigned array %d  place value 0", k+1, i); break;

    }
            //    printf("\n came out of k %d  assigned array %d  place value 0", k+1, i, i);

           }
           else{
               printf("\n \t \t \tfalse %d of array is not 0 and k is %d", i,k);
           }
       }
   }

     
}

void stringPermutationsPrinterAuto(char *string){
    int i = countLetters(string);
    stringPermutationsPrinter(string, 0);
}


int main (){

    // int i = 0;
    char ch;

    //  char *sarcasmCase = malloc(sizeof(char)*30);
    //   sarcasmCase[0] ='j';
    //   sarcasmCase[1] ='H';
    //   sarcasmCase[2] ='a';
    //   sarcasmCase[3] ='h';
    //   sarcasmCase[4] ='K';
    //   sarcasmCase[5] ='j';
    //   sarcasmCase[6] =' ';
    //   sarcasmCase[7] ='Z';
    //   sarcasmCase[8] ='a';
    //   sarcasmCase[9] ='z';
    //   sarcasmCase[10] ='K';
    //   sarcasmCase[11] ='j';
    //   sarcasmCase[12] ='\0';// this is important, without it the function
    //   // behaves abnormaly

      // note you can fill a direct array all at once with stack string 
      // just declare like char array then value, function still works;
  
    // char *sarcasmCase2 = tooggleCase(sarcasmCase);

    // printf("%s sarcasm 1 \n",sarcasmCase);

    // printf("%s sarcasmCase2 \n", sarcasmCase2);

  //////////   char chararraytwo[] = "How are you BROTHER ?";

  //  char *arraythree = malloc(sizeof(char)*30);
    

  /////////////  char *arraythree = stringToHeap(chararraytwo);
    // i = 0;
    // while(chararraytwo[i]!= '\0'){

    //     arraythree[i] = chararraytwo[i];
    //     i++;
    // }

    // // test code for testing string compares
    // char *stringcompareone= "mm";
    // char *stringcomparetwo = "sifgdfgr";

    // stringcomparetwo = stringToHeap(stringcomparetwo);
    // stringcompareone = stringToHeap(stringcompareone);

    // printf("\n result of comparison is %d \n",CompareStrings(stringcompareone, stringcomparetwo));
    // printf("\n result of comparison is %d \n",CompareByAlphabets(stringcompareone, stringcomparetwo));
    // printf("\n result of comparison is %d \n",compareStringCaseInsensitive(stringcompareone, stringcomparetwo));

    // palindromString(stringcompareone);

    // palindromString(stringcomparetwo);

    // duplicatePrinterUsingBits(stringcompareone);
    // duplicatePrinterUsingBits(stringcomparetwo);

    // char hi[] = "&mediCal454!";
    // char hi2[] = "!Decimal544&";
    // char hi3[] = "meimal544&";

    // printf("\n %s and %s Anagram result %d ",hi, hi2, AnagramChecker(hi, hi2));

    // printf("\n %s and %s Anagram result %d ",hi2, hi3, AnagramChecker(hi2, hi3));

    char perm[] = "ab";

    stringPermutationsPrinterAuto(perm);
    
    
    ch = getchar();
    printf("\n \n %c",ch);

    return 1;
 
}
