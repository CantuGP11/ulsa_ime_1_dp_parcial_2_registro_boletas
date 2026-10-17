#include <iostream>

void Aprobo_Reprobo(double Matematicas,  double Espanol, double Disenio)
{
    if (Matematicas >= 70)
    {
        std::cout << "Aprobo Matematicas" << std::endl;
    }
    else
    {
        std::cout << "Reprobo Matematicas" << std::endl;
    }
    if (Espanol >= 70)
    {
        std::cout << "Aprobo Espanol" << std::endl;
    }
    else
    {
        std::cout << "Reprobo Espanol" << std::endl;
    }
    if (Disenio >= 70)
    {
        std::cout << "Aprobo Disenio de Programas" << std::endl;
    }
    else
    {
        std::cout << "Reprobo Disenio de Programas" << std::endl;
    }
}