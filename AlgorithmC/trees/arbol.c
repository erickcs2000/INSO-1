#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
void recursivo(struct TreeNode *left, struct TreeNode *right, int contadorNodos, int *ArrayLado);
void recursivo2(struct TreeNode *right, struct TreeNode *left, int contadorNodos, int *ArrayRight);
int *recursivoLeft(struct TreeNode *left, int contadorNodos);
int *recursivoRight(struct TreeNode *right, int contadorNodos);



struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
 };
 

int main(){
    printf("holaMundo");
}

bool isSymmetric(struct TreeNode *root){
    int door = 0;
    int *ArrayIzq;
    int *ArrayDer;

    if(root->val != NULL){

        ArrayIzq = recursivoLeft(root->left, 0);
        ArrayDer = recursivoRight(root->left, 0);
        
    }
    if(ArrayIzq == ArrayDer){
        return true;
    }
    else
    {
        return false;
    }
    

}

int *recursivoLeft(struct TreeNode* left, int contadorNodos){
    
    int *ArrayLeft;
    if(left->val != NULL){
        contadorNodos++;
        ArrayLeft = realloc(ArrayLeft, sizeof(int)*contadorNodos);
        ArrayLeft[contadorNodos-1] = left->val;
        recursivo(left->left, left->right, contadorNodos, ArrayLeft);
    }
    return ArrayLeft;


}

int *recursivoRight(struct TreeNode* right, int contadorNodos){
    int *ArrayRight;
    if(right->val != NULL){
        contadorNodos++;
        ArrayRight = realloc(ArrayRight, sizeof(int)*contadorNodos);
        ArrayRight[contadorNodos-1] = right->val;
        recursivo2(right->right, right->left, contadorNodos, ArrayRight);
    }
    return ArrayRight;
}



void recursivo(struct TreeNode* left, struct TreeNode* right, int contadorNodos, int *ArrayLeft){
    int doorLeft = 0;


    if (left->val != NULL)
    {
        contadorNodos++;
        ArrayLeft = realloc(ArrayLeft, sizeof(int)*contadorNodos);
        ArrayLeft[contadorNodos-1] = left->val;
        recursivo(left->left ,left->right, contadorNodos, ArrayLeft);
        
    }

    if (right->val != NULL)
    {
        contadorNodos++;
        ArrayLeft = realloc(ArrayLeft, sizeof(int)*contadorNodos);
        ArrayLeft[contadorNodos-1] = left->val;
        recursivo(right->left ,right->right, contadorNodos, ArrayLeft);
    }
    
    
}


void recursivo2(struct TreeNode* right, struct TreeNode* left, int contadorNodos, int *ArrayRight){
    

    if (right->val != NULL)
    {
        contadorNodos++;
        ArrayRight = realloc(ArrayRight, sizeof(int)*contadorNodos);
        ArrayRight[contadorNodos-1] = right->val;
        recursivo2(right->right ,right->left, contadorNodos, ArrayRight);
        
    }

    if (right->val != NULL)
    {
        contadorNodos++;
        ArrayRight = realloc(ArrayRight, sizeof(int)*contadorNodos);
        ArrayRight[contadorNodos-1] = right->val;
        recursivo2(left->right,left->left, contadorNodos, ArrayRight);
    }
    
    
}





/*
                                           1
                                      /        \
                                     /          \
                                    /            \
                                   /              \
                                  2                2
                                 / \              / \                true
                                /   \            /   \
                               3     4          4     3
                              / \   / \        / \   / \
                             5   6 7   6      7   8 9   2  
*/
