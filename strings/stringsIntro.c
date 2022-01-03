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

     //char *sarcasmCase = (char *)malloc(sizeof(char)*30);
     char sarcasmCase[] = "HeLlOtHeRe";

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