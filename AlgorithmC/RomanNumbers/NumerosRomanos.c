#include<stdio.h>
#include<stdlib.h>
int romanToInt(char * s);

int main(){

    char Hola[]= "III";
    int num = romanToInt(Hola);
    printf("%d",num);
}



int romanToInt(char * s){
    int i=0;
    int total = 0;
    for (i =0; s[i] !='\0'; i++){

        if(s[i] == 'M'){       
            total = total + 1000;
        }
        else if(s[i] == 'D'){
            total = total + 500;
        }

        else if(s[i] == 'C'){
            
            if (s[i+1] == 'M' || s[i+1] == 'D')
            {
                total = total - 100;
            }
            else{
                total = total +100;
            }
        }

        else if(s[i] == 'L'){
            total = total+50;
        }

        else if(s[i] == 'X'){
            
            if (s[i+1] == 'L' || s[i+1] == 'C')
            {
                total = total - 10;
            }
            else
            {
                total = total + 10;
            }
            
        }

        else if(s[i] == 'V'){
            total = total+5;
        }
        else if(s[i] == 'I'){

            if (s[i+1] == 'X' || s[i+1] == 'V')
            {
                total = total - 1;
            }
            else
            {
                total = total + 1;
            }
        }

    }

    return total;

}