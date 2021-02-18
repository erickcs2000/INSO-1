#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int SalidasFinales(int numCourses, int** prerequisites, int* prerequisitesColSize, int **salidasValidas, int contSalidas, int *out, bool salida, bool fail);
bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize);

int main(){
    int numCourses = 3;
    int **prerequisites;
    prerequisites = malloc(sizeof(int*)*3);
    prerequisites = malloc(sizeof(int)*3);
    prerequisites[0][0] = 0;
    prerequisites[0][1] = 0;
    prerequisites[0][2] = 0;

    prerequisites[1][0] = 0;
    prerequisites[1][1] = 1;
    prerequisites[1][2] = 1;

    prerequisites[2][0] = 1;
    prerequisites[2][1] = 1;
    prerequisites[2][2] = 0;

    int *prerequisitesColSize;
    prerequisitesColSize = malloc(sizeof(int)*3);
    for (int i = 0; i < numCourses; i++)
    {
        prerequisitesColSize[i] = 3;
    }
    
    bool FINAL = canFinish(numCourses, prerequisites, 3, prerequisitesColSize);
    if(FINAL == true){
        printf("verdadero\n");
    }
    else{
        printf("falso\n");
    }
}
//
//
//       cursos [1,0,1]  [0,1,0]  [0,1,1]; 
//
//
bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize){
    bool salida = false;
    bool fail = false;

    int **salidasValidas;
    int contSalidas = 0;
    int counter = 0;
    int contCursos = 0;
    int *out;
    int finaldoor =0;
    for (int i = 0; i < numCourses; i++)
    {
        
        for (int j = 0; j <  prerequisitesColSize[i]; j++)
        {
            if(prerequisites[i][j] == 0){
                counter++;
            } 
        }
        if(counter == numCourses){
            contSalidas++;
            out = malloc(sizeof(int)*contSalidas);
            
            
            out[contSalidas-1]=1; 

            salidasValidas = malloc(sizeof(int*)*contSalidas);
            salidasValidas = malloc(sizeof(int)*out[i]);
            salidasValidas[contSalidas-1][0] = i; 
        }
        
        counter = 0;
        
        
    }
    
    contCursos++;
    while (finaldoor == 2)
    {
        
        finaldoor = SalidasFinales(numCourses, prerequisites, prerequisitesColSize, salidasValidas, contSalidas, out, salida, fail);
        
    }
    if(finaldoor == 1){
        return true;
    }
    if(finaldoor == 3)
    {
        return false;
    }
    

    
    
}
int SalidasFinales(int numCourses, int** prerequisites, int* prerequisitesColSize, int **salidasValidas, int contSalidas, int *out, bool salida, bool fail){
    int agree = 0;
    int nuevasSalidas = 0;
    int counter = 0;
    int errores = 0;
    int completo = 0;
    for (int i = 0; i < contSalidas && completo == false; i++)
    {

        for (int j = 0; j < out[i]; j++)
        {
            //printf("El numero es out:%d\n%d\t%d\n", out[i],agree,salidasValidas[i][j]);
            if(salidasValidas[i][j] == i){
                
                agree++;
            }
        }
        if(agree == 0)
        {
            
            for (int x = 0; x < numCourses; x++)
            {
                
                for (int y = 0; y <  prerequisitesColSize[x]; y++)
                {
                    if(prerequisites[i][y] == 0)
                    {
                        counter++;
                        
                    } 
                }
                if(counter == numCourses)
                {
                    nuevasSalidas++;
                    out[i]++; 

                    salidasValidas = malloc(sizeof(int)*out[i]);
                    salidasValidas[i][out[i]-1] = x; 
                }
                else{
                    errores++;
                }
                counter = 0;
                
                
            }
            
            


        }
        //printf("%d\t%d\n", agree, contSalidas);
        if(agree == contSalidas){
            completo = true;
           // printf("hola");
        }
        else
        {
            agree = 0;
        }
        
        

    }
    
    if(errores == contSalidas){
        fail = true;
        return 3;
    }
    //printf ("%d\n",contSalidas);
    contSalidas = nuevasSalidas;
    if(completo > 0){
        salida = true;
        //printf("hola\n");
    }
    
    for (int i = 0; i < contSalidas; i++)
    {
        //printf("%d\t%d\n", out[i], numCourses);
        if(out[i] == numCourses)
        {
            
            salida = true;
        }
    }
    if(salida == true){
        return 1;        
    }
    else
    {
        return 2;
    }
    
}