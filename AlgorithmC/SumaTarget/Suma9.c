#include<stdio.h>
#include<stdlib.h>
int *Respuesta(int* Array, int target, int tamArray);
int main(){
    int array [] ={7,4,5,6,2};
    int target = 9;
    int tamArray;
    tamArray = sizeof(array)/sizeof(int);
    printf("%d\n",tamArray);
    
    int *result = Respuesta(array, target, tamArray);
    printf("%d\t%d",result[0],result[1]);
}


int *Respuesta(int* Array, int target, int tamArray){
    int *result;
    int i =0;
    int j =i+1;
    int total  = 0;
    for (; i < tamArray; i++)
    {
        for (; j < tamArray; j++)
        {
            //printf("%d\t%d\n",Array[i],Array[j]);
            total = Array[i]+Array[j];
            if(total== target){
                result[0] = i;
                result[1] = j;
                break;
            }
        }
        
    }
    return result;
}