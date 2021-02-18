#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


int main(){

}

//    Input: "1-2--3---4-5--6---7"
//    Output: [1,2,5,3,null,6,null,4,null,7]

struct TreeNode* recoverFromPreorder(char * S){
    struct TreeNode *Arbol;
    char *aux = NULL;
    int doorNum = 0;
    for(int i = 0; S[i] != '-'; i++){
        if (S[i] >= '0' && S[i] <= 9)
        {
            aux = realloc(aux, sizeof(char)*(i+1));
            aux[i]=S[i];
        }
        else{
            doorNum++;
            printf("error dato no numerico");
        }
        
    }

    if(aux != NULL)
    {
           Arbol[0].val = atoi(aux);  
    }
    
}

void recursivo(char *s, struct TreeNode *Arbol){
    char *aux;
    strlen(strtok(s, '-'));
}