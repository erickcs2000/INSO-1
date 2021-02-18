#include<stdio.h>
#include<stdlib.h>
int lengthOfLongestSubstring(char * s);
int main(){

    char Hola[]="amaskak";

    int tam = lengthOfLongestSubstring(Hola);
    printf("%d",tam);
}

int lengthOfLongestSubstring(char * s){
    char *subChar = NULL;
   // subChar = malloc(1);
    int total = 0;
    int newTotal = 0;
    int conArray = 0;
    for (int i = 0; s[i] != '\0'; i++){
        subChar = realloc(subChar,newTotal+1);

        for (int j = 0; subChar[j] != '\0'; j++)
        {
            if(s[i] == subChar[j]){
                if (newTotal > total){
                    total = newTotal;
                    newTotal = 0;
                    subChar = NULL;
                    subChar = realloc(subChar,newTotal+1);
                    conArray = 0;
                }
                else{
                    newTotal =0;
                    subChar = NULL;
                    subChar = realloc(subChar,newTotal+1);
                    conArray = 0;
                }
                
                
            }
        }
        
        subChar[conArray] = s[i];
        conArray++;
        newTotal++;
        
        printf("%s\n", subChar);
    }
    
    return total;
    
}