#include <stdio.h>
#include <stdlib.h>


    char * tooggleCase(char *charray){
        int i;
        printf("------%s",charray);
        printf("%c",charray[0]);
        for(i = 0; charray[i] != '\0'; i++){
            if (charray[i] >= 65 && charray[i] <=90){
                charray[i] = charray[i] + 32;
            }
            else if (charray[i] >= 'a' && charray[i] <= 'z'){
                charray[i] = charray[i] - 32;
            }
        }
         printf("\n------%s",charray);
        return charray;

    }   

int main (){


    // char temp;
    // temp = 'A';
    // printf("%c",temp);



    //  char X[5] = {'A', 'B', 'C', 'd', 'E',};

    //  char x1[5] = {'65', '66', '67', '68', '69'};

    //  char *chararray ="hello";

    //  char welc[] = "welcome";

     char *sarcasmCase = malloc(sizeof(char)*30);
      sarcasmCase[0] ='j';
      sarcasmCase[1] ='H';
      sarcasmCase[2] ='a';
      sarcasmCase[3] ='h';
      sarcasmCase[4] ='K';
      sarcasmCase[5] ='j';
      sarcasmCase[6] ='j';
      sarcasmCase[7] ='Z';
      sarcasmCase[8] ='a';
      sarcasmCase[9] ='z';
      sarcasmCase[10] ='K';
      sarcasmCase[11] ='j';
      sarcasmCase[12] ='\0'; // this is important, without it the function
      // behaves abnormaly

      // note you can fill a direct array all at once with stack string 
      // just declare like char array then value, function still works;
  
      

    //  printf("%s",welc); 
    // int i;
     //change case
    // for(i = 0; welc[i]!= '\0'; i++){
    //     welc[i] = welc[i] - 32;
    // }

    char *sarcasmCase2 = tooggleCase(sarcasmCase);

    //printf("%u %u \n", &welc, &welc[1]);

    printf("%s sarcasm 1 \n",sarcasmCase);

    printf("%s sarcasmCase2 \n", sarcasmCase2);


     

    

    return 1;
}