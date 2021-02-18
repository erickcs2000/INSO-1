#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int reverse(int x);
int Inverse(int x);

int main(){
    int try = 1234;
    try = Inverse(try);
    printf("%d",try);

    
}


int reverse(int x){
    int length = snprintf( NULL, 0, "%d", x );
    char aux; 
    char *Out = NULL;
    Out = malloc(length+1);
    sprintf(Out,"%d",x);
    int a =0;
    while (Out[a] != '\0')
    {
        a++;
    }
    int j =0;
    int i = a-1;
    
    for(; i > (a/2)-1; --i){
        
        aux = Out[i];
        Out[i] = Out[j];
        Out[j] = aux;
        j++;
    }
    x = atoi(Out);
    return x;
}

int Inverse(int x){


    int total = 0;
    int pop =0;
    for (;x%10 > 0;)
    {
       pop = x%10;
       total = (total*10) + pop;
       x/=10;
    }
    return total;


}
