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

int main (){

    // int i = 0;
    char ch;

     char *sarcasmCase = malloc(sizeof(char)*30);
      sarcasmCase[0] ='j';
      sarcasmCase[1] ='H';
      sarcasmCase[2] ='a';
      sarcasmCase[3] ='h';
      sarcasmCase[4] ='K';
      sarcasmCase[5] ='j';
      sarcasmCase[6] =' ';
      sarcasmCase[7] ='Z';
      sarcasmCase[8] ='a';
      sarcasmCase[9] ='z';
      sarcasmCase[10] ='K';
      sarcasmCase[11] ='j';
      sarcasmCase[12] ='\0';// this is important, without it the function
      // behaves abnormaly

      // note you can fill a direct array all at once with stack string 
      // just declare like char array then value, function still works;
  
    // char *sarcasmCase2 = tooggleCase(sarcasmCase);

    // printf("%s sarcasm 1 \n",sarcasmCase);

    // printf("%s sarcasmCase2 \n", sarcasmCase2);

     char chararraytwo[] = "How are you BROTHER ?";

  //  char *arraythree = malloc(sizeof(char)*30);
    

    char *arraythree = stringToHeap(chararraytwo);
    // i = 0;
    // while(chararraytwo[i]!= '\0'){

    //     arraythree[i] = chararraytwo[i];
    //     i++;
    // }



    char *pointertemp = tooggleCase(arraythree);

    printf(" arrray three,  should be same and togglecased %s \n %s",arraythree, pointertemp);

    countvowels(arraythree);
    countconsonants(arraythree);


    printParaStat(arraythree);

    char *username = malloc(sizeof(char)*30);

    printf("\n Enter a username (only ascii letters allowed and no symbols)\n");
    scanf("%s",username);
      

    username = stringToHeap(username);
    validateUsername(username);
    printf("\n username \"%s\" is created successfully\n",username);

    char *reversedString = reverserString(arraythree);

    reverseString(arraythree);
    printf("\n username is %s reversed string is %s nkn\n",arraythree,reversedString);




    
    
    ch = getchar();
    printf("\n \n %c",ch);

    return 1;
 
}
