#ifndef REPORTEAPROVADOS_H
#define REPORTEAPROVADOS_H

#include <iostream>

void Aprobo_Reprobo(double Matematicas,  double Espanol, double DiseniodeProgramas)
{
    if (Matematicas >= 70)
    {
        std::cout << "Aprobo: Matematicas" << std::endl;
    }
    else
    {
        std::cout << "Reprobo: Matematicas" << std::endl;
    }
    if (Espanol >= 70)
    {
        std::cout << "Aprobo: Espanol" << std::endl;
    }
    else
    {
        std::cout << "Reprobo: Espanol" << std::endl;
    }
    if (DiseniodeProgramas >= 70)
    {
        std::cout << "Aprobo: Disenio de Programas" << std::endl;
    }
    else
    {
        std::cout << "Reprobo: Disenio de Programas" << std::endl;
    }
    if(Matematicas >= 70 && Espanol >= 70 && DiseniodeProgramas >= 70 )
    { 
    std::cout << "APROBADO GENERAL" << std::endl;
    }
    else 
    {
    std::cout << "REPROBADO GENERAL" << std::endl;
    }
}
#endif