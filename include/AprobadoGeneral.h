#ifndef AprobadoGeneral_h
#define AprobadoGeneral_h

#include <iostream>
void AprobadoGeneral (double Matematicas,  double Espanol, double DiseniodeProgramas)
{
if
(Matematicas >= 70 && Espanol >= 70 && DiseniodeProgramas >= 70 )
    { 
    std::cout << "APROBADO GENERAL" << std::endl;
    }
    else 
    {
    std::cout << "REPROBADO GENERAL" << std::endl;
    }
}
#endif