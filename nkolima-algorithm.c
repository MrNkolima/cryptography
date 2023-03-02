#include <stdio.h>
#include <string.h>

#define KEY 3

int main(void){
    char textInput[100];
    char cipherText[100];

    printf("Write Text:: ");
    fgets(textInput,100,stdin);

    int len = strlen(textInput);

    for(int i=0; i<len; i++){
        if( textInput[i]>='a' && textInput[i]<='z' ){
            cipherText[i]= 'a' + (((textInput[i] * i*KEY -'a')*KEY)%26);
        }else if( textInput[i]>='A' && textInput[i]<='Z' ){
           cipherText[i] = 'A' + (((textInput[i] * i - 'A')*KEY)%23)*KEY;
        }else{
           cipherText[i]=textInput[i];
        }
    }
    cipherText[0]=textInput[0];

    printf("Encrypted Text:: %s\n",cipherText);
    return 0;
}
