#include "pch.h"
#include "Auxil.h" 
#include <ctime>    
namespace auxil
{
    void start()                          // �����  ���������� ��. �����
    {
        srand((unsigned)time(NULL));
    };
    double dget(double rmin, double rmax) // �������� ��������� �����
    {
        return ((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin;
    };
    int iget(int rmin, int rmax)         // �������� ��������� �����

    {
        return (int)dget((double)rmin, (double)rmax);
    };


    int recursion_fibonachi(int number)
    {
        if (number == 1)
            return 0;
        if (number == 2 or number == 3)
            return 1;

        return recursion_fibonachi(number - 1) + recursion_fibonachi(number - 2);
    }
}
