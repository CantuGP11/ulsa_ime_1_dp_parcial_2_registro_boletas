#include <iostream>
#include <iomanip>
#include <string>
#include "estudiantes.h"
#include "utilerias.h"
#include "ReporteAprovados.h"
#include "AprobadoGeneral.h"
#include "promedios.h"


void mostrarMenu()
     {
    std::cout << "1.-Mostrar Lista\n";
    std::cout << "2.-Estadisticas por Materia\n";
    std::cout << "3.-Aprobados y Reprobados generales\n";
    std::cout << "4.-Boleta Individual\n";
    std::cout << "5.-Materias Reprobadas por Alumno\n";
    std::cout << "6.-Salir\n";
}

void eligeOpcion(std::string alumnos[],
double Matematicas[],double Espanol[], double DiseniodeProgramas[]) {
    while (true){
    
        int opcion = leerEntero("Selecciona una opcion:");
    
        if(opcion == 6) {
    std::cout << "Echale mas ganas\n";
    return;
}
        
        switch(opcion){
            case 1:
        {
       std::cout << "\nLISTA DE ALUMNOS\n";
       for (int i = 0; i < MAX_ALUMNOS; i++) {
       std::cout << alumnos[i] << std::endl;
        }
    }
            break;
            case 2:
             {
                std::cout << "\nPromedios de los alumnos\n"  << std::endl;
imprimirPromedio(alumnos, Matematicas, Espanol,DiseniodeProgramas, MAX_ALUMNOS);

       }
          
    break;
            case 3:
            {
              for (int i = 0; i < MAX_ALUMNOS; i++)
   {
        std::cout << "-Alumno: " << alumnos[i] << std::endl;
    AprobadoGeneral( Matematicas[i], Espanol[i], DiseniodeProgramas[i] );
      }
            }
            break;
            case 4:
    {
    for (int i = 0; i < MAX_ALUMNOS; i++)
    {
        std::cout << "\nAlumno: " << alumnos[i] << std::endl;
        std::cout << "Matematicas: " << Matematicas[i] << std::endl;
        std::cout << "Espanol: " << Espanol[i] << std::endl;
        std::cout << "Disenio de Programas: " << DiseniodeProgramas[i] << std::endl;
        }
         }
        break;
            case 5:
            {
            for (int i = 0; i < MAX_ALUMNOS; i++)
    {       
            std::cout <<"\nAlumno:" << alumnos[i] << std::endl;  
           
        Aprobo_Reprobo(
            Matematicas[i],
            Espanol[i],
            DiseniodeProgramas[i]
        ); 

        std::cout << std::endl;
    }
          }  
            break;
            case 6:
          { 
             std::cout << "\nEchale mas ganas \n";
        
          }
            break;
            default:
                    std::cout << "Opcion invalida\n";
}
 
        }
    }

