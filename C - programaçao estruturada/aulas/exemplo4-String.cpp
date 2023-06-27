/*vai receber duas strings em senguida calcular o tamanho e
 fazer a cocatenação das duas strings*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str1[80], str2[80];

    puts("digite duas strings: ");
    gets(str1);
    gets(str2);
    printf("comprimentos: str1(%d) str2(%d)q\n", strlen(str1), strlen(str2));

    if(!strcmp(str1,str2)){
        printf("strings iguais");
    }else{
        strcat(str1,str2);
        printf("str1 + str2 = %s\n", str1);
    }
    if (strchr(str1, 't')) 
    {
        printf("t esta em str1!");
    }
    if (strstr(str1, "tudo"))
    {
        printf("tudo esta em str1");
    }
    
    

    system("pause");
}