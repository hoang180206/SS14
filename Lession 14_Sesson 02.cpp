#include <stdio.h>
int main(){
    char str[]="xin chao b";
    printf("Cac ky tu trong chuoi la: ");
    for(int i=0; str[i]!='\0'; i++){
        printf("%c ", str[i]); 
    }
    return 0;
}
