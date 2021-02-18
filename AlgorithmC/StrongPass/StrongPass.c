#include<stdio.h>
#include<stdlib.h>
int strongPasswordChecker(char * s);
int main(){
    char PASS[]="3Csa";
    int change = strongPasswordChecker(PASS);
    printf("%d",change);


}


int strongPasswordChecker(char * s){

    int mayus = 0;
    int minus = 0;
    int numer = 0;
    int repet = 0;
    int i = 0;       //tamano
    int changes = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (minus == 0 && s[i] >= 'a' && s[i] <= 'z'){
            minus++;
        }
        if (mayus == 0 && s[i] >= 'A' && s[i] <= 'Z'){
            mayus++;
        }
        if (numer == 0 && s[i] >= '0' && s[i] <= '9'){
            numer++;
        }
        if(i >= 2 && s[i] == s[i-1] && s[i] == s[i-2]){
            repet++;
        }

    }
    
    if(minus > 0 && mayus > 0 && numer > 0 && repet == 0 && i >=6 ){
        return 0;
    }
    if (repet >0)
    {
        repet--;
        i--;
    }
    
    if(minus == 0){
        i++;
        changes++;
       
    }

    if(mayus == 0){
        i++;
        changes++;
    }

    if(numer == 0){
        i++;
        changes++;
    }

    
    while (i < 6)
    {
       i++;
       changes++;
    }
        
    
    
    while (i > 20)
    {
       i--;
       changes++;
    }

    
    return changes;

}