#include "utilerias.h"
#include "estudiantes.h"
void imprimirPromedio(string n[], decimal m[], decimal esp[], decimal dp[], int tam){
    for (int i = 0; i< MAX_ALUMNOS; i++){
        decimal promedio=(m[i]+ esp[i]+ dp[i])/3;
        std::cout <<",promedio de matematicas:"<< m[i]<<",promedio de español:"<<esp[i]<<",promedio de diseño de programas:"<<dp[i]<<",promedio:"<<promedio;
    }//for
}//funcion