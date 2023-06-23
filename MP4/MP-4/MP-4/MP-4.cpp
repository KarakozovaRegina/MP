#include "pch.h"
#include <algorithm>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "Levenshtein.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    clock_t t1 = 0, t2 = 0, t3, t4;
    char x[] = "abcdefghklmnoxm", y[] = "xyabcdefghomnkm";
    int  lx = sizeof(x) - 1, ly = sizeof(y) - 1;
    cout << endl;
    cout << endl << "-- расстояние Левенштейна -----" << endl;
    cout << endl << "--длина --- рекурсия -- дин.програм. ---"
        << endl;
    for (int i = 8; i < min(lx, ly); i++)
    {

        t1 = clock();
        cout << "\tРасстояние по рекурсии: ";
        cout << levenshtein_r(i, x, i - 2, y);
        t2 = clock();
        t3 = clock();
        cout << "\t Расстояние по дин.прог.: ";
        cout << levenshtein(i, x, i - 2, y);
        t4 = clock();
      
        cout << "\tВремя по рекурсии: " << (t2 - t1) << " ms"<<"  ";
        cout << "\tВремя по дин.прог.: " << (t4 - t3) << " ms"<< endl;
    }


    system("pause");
    return 0;
}
