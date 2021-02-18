#include<stdlib.h>
#include<stdio.h>

int main(){
    
}
/*
                            Example 1:

                            Input: [1,2,0]
                            Output: 3


                            Example 2:

                            Input: [3,4,-1,1]
                            Output: 2


                            Example 3:

                            Input: [7,8,9,11,12]
                            Output: 1

*/

int firstMissingPositive(int* nums, int numsSize){
    int Aux = 0;
    int j = 0;
    Quicksort(nums, 0, numsSize-1);
    for(int i = 0; i < numsSize; i++){
         if(nums[i] != j+1 && nums[i] > 0){
             return j+1;
         }
         if(nums[i] == j+1){
             j++;
         }
         
    }
}

void Quicksort(int lista[], int limit_izq, int limit_der){
	int izq = limit_izq;
	int der = limit_der;
	int Aux;
	int Pos = lista[((limit_der + limit_izq)/2)];
	
	do{
		while(lista[izq] < Pos && izq < limit_der){	//Recorre la lista hasta encontar un numero menor a pos
			izq++;
		}
		while(lista[der] > Pos && der > limit_izq){	//Recorrela lista hasta encontarr un numero mayor a pos
			der--;
		}
		if (izq <= der){	// como no ponemos como limite la posicion central el array recorrera todas las posiciones
			Aux = lista[der];
			lista[der] = lista[izq];
			lista[izq] = Aux;
			der--;
			izq++;
		}
		
	}while(izq <= der);
	
	//Hacemos que la funcion se llame a si misma mientras que no recorra todos los numeros
	
	if(der > limit_izq){
		Quicksort(lista,limit_izq,der);
	}
	if( izq < limit_der){
		Quicksort(lista,izq,limit_der);
	}
}