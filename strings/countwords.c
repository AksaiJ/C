#include <stdio.h>
#include <stdlib.h>


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
    
    
    ch = getchar();
    printf("\n \n %c",ch);

    return 1;
 
}
