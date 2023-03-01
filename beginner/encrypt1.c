#include <stdio.h>
#include <string.h>

#define KEY 3 

int main(void){
    char textInput[100];
    char cipherText[100];
    
    printf(" Text to encrypt:: ");
    fgets(textInput,100,stdin);
    
    int len = strlen(textInput);
    
    for(int i=0; i<len; i++){
        if(textInput[i]>='a' && textInput[i]<='z'){
            cipherText[i] = 'a' + ((textInput[i]-'a')*KEY)%26;
        }else if(textInput[i]>='A' && textInput[i]<='Z'){
            cipherText[i] = 'A' + ((textInput[i]+'A')*KEY)%26;
        }else{
            cipherText[i] = textInput[i];
        }
    }
    
    printf(" The encrpted text is :: %s \n",cipherText);
    return 0;
}
