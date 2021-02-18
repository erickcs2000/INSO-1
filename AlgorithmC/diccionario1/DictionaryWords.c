#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
#include<string.h>
bool wordBreak(char * s, char ** wordDict, int wordDictSize);
char **wordBreak2(char * s, char ** wordDict, int wordDictSize, int* returnSize);
int main(){

    char **WordDict;
    int WordDictSize;

    WordDict = (char**) malloc(sizeof(char*)*6);
    WordDict[0] = (char*) malloc(sizeof(char)*6);
    WordDict[1] = (char*) malloc(sizeof(char)*6); 
    WordDict[2] = (char*) malloc(sizeof(char)*6);
    WordDict[3] = (char*) malloc(sizeof(char)*6);
    WordDict[4] = (char*) malloc(sizeof(char)*6);

    WordDict[0] = "cat";
    WordDict[1] = "cats";
    WordDict[2] = "and";
    WordDict[3] = "sans";
    WordDict[4] = "dog";
    char *s = "catsanddog";
    int *tamanos;
    int wordDictSize = 5;
    int j = 0;
    int *returnSize;
    char **ola = wordBreak2(s, WordDict, wordDictSize, returnSize);

    for (int i = 0; i < 2; i++)
    {
        printf("%s\n%s\n",ola[0],ola[1]);
    }
    
    

}

bool wordBreak(char * s, char ** wordDict, int wordDictSize){
    //  Diccionario
    //  Frase
    //  (2)Cantidad palabras Diccionario
    int a = 0;
    int *tamanos;
    
    int j = 0;
    int contAciertos = 0;
    int errores;
    int aux = 0;
    bool acierto = true;
    
    tamanos = malloc(sizeof(int)*wordDictSize);
    for (int i = 0; i < wordDictSize; i++)
    {
        for (j = 0; wordDict[i][j] != '\0'; j++)
        {
            
        }
        
        tamanos[i] = j;
    }

    for(int i = 0; s[i] != '\0' && acierto == true; i++){
    
        aux = i;
        for (int j = 0; wordDict[a][j] != '\0'; j++)
        {
            if (s[i] == wordDict[a][j])
            {
                contAciertos++;
                
                i++;
                
            }
            
            
        }
 
        if(contAciertos != tamanos[a]){
            i = aux;
            
            a++;
            contAciertos = 0;
            for (int j = 0; wordDict[a][j] != '\0'; j++)
            {
                if (s[i] == wordDict[a][j])
                {
                    contAciertos++;
                    i++;
                }

            }
            if(contAciertos != tamanos[a]){
                acierto = false;
            }
            else
            {
                
                contAciertos =0;
            }
            
            a = 0;
        }

        else{
            
            contAciertos = 0;
        }
        i--;
    }
    
    return acierto;
    
}


// Diccionario 3 palabras
// Palabra grande contiene palabras del diccionario


// Nueva palabra grande separada en palabras del diccionario, con espacios incluidos



char **wordBreak2(char * s, char ** wordDict, int wordDictSize, int* returnSize){

    char **Palabra;
    int contadorFrases =0;



    int a = 0;
    int *tamanos;

    int contAciertos = 0;
    int errores = 0;
    int aux = 0;
    int f =0;
    tamanos = malloc(sizeof(int)*wordDictSize);
    for (int i = 0; i < wordDictSize; i++)
    {
        for (f = 0; wordDict[i][f] != '\0'; f++)
        {
            
        }
        
        tamanos[i] = f;
    }

    int cont = 0;

    int *diferentes;
    tamanos = malloc(sizeof(int)*wordDictSize);
    returnSize = malloc(sizeof(int)*wordDictSize);
    diferentes = malloc(sizeof(int)*wordDictSize);
    printf("pepino\n");

    for (int i = 0; i < wordDictSize; i++){
        printf("hola\n");
        
        for (int j = 0; wordDict[i][j] !='\0' && s[a] != '\0'; j++)
        {
            
            if(wordDict[i][j] == s[a] && diferentes[i] == 0){
            contAciertos++;
            }
            else if(diferentes[i] < 1 && wordDict[a][i] != s[i]){
                diferentes[i]++;
            }

            if(diferentes[i] == 0 && contAciertos == tamanos[i]){
                returnSize[i] = returnSize[i] + contAciertos;
                Palabra = realloc(Palabra, sizeof(char*)*(i+1));
                Palabra[i] = realloc(Palabra, sizeof(char) * (tamanos[i]+1));
                strcat(Palabra[i], wordDict[a]);
                strcat(Palabra[i], " ");
                
            }
            a++;
            contAciertos == 0;  
        }
         
        a = 0;
        printf("%s\n",Palabra[i]);
           
            
            
    }
        
        
    return Palabra;
    
}