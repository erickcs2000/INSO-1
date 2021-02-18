#include<stdlib.h>
#include<stdio.h>
int* searchRange(int* nums, int numsSize, int target, int* returnSize);
int main(){
    int array[] = {5,7,7,8,8,10};
    int numSize = sizeof(array)/ sizeof(int);
    printf("%d\n",numSize);
    int *returnSize = malloc(sizeof(int)*2);
    returnSize = searchRange(array, numSize, 8, returnSize);
    printf("%d\t%d",returnSize[0],returnSize[1]);
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int salida = 0;
    int salida2 = 0;
    returnSize = malloc(sizeof(int)*2);
    
    for (int i = 0; i < numsSize && salida == 0; i++)
    {
        if (nums[i] == target)
        {
            returnSize[0] = i;
            salida++;
        }
        
    }
    if (salida != 0)
    {
        for (int i = numsSize-1 ; i >= 0 && salida2 == 0; i--)
        {
            if (nums[i] == target)
            {
                returnSize[1] = i;
                salida2++;
            }
        }
        
    }
    
    else
    {
        returnSize[0] = -1;
        returnSize[1] = -1;
    }
    
    return returnSize;

}