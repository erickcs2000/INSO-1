#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int maxProfit(int k, int* prices, int pricesSize);
int main(){
    int pricesSize = 3;
    int *prices;
    prices = malloc(sizeof(int)*pricesSize);
    prices[0] = 2;
    prices[1] = 4;
    prices[2] = 1;
    int k = 2;
    int prueba = maxProfit(k, prices,pricesSize);
    printf("%d", prueba);
}




int maxProfit(int k, int* prices, int pricesSize){
    int profit = 0;
    int profitFinal = 0;
    int cont = 0;
    for (int i = 0; i < pricesSize-1; i++){
        while (cont < k)
        {
            
        }
        
    }
    return profitFinal;
}