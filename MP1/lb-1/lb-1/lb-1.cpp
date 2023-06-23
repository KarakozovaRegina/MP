#include "pch.h"
#include "Auxil.h"                            // вспомогательные функции 
#include <iostream>
#include <ctime>
#include <locale>
#include <chrono>

#define  CYCLE  5000000                       // количество циклов  

int main()
{
	
	double  av1 = 0, av2 = 0;
	clock_t  t1 = 0, t2 = 0, t3 = 0, t4 = 0;
	
	setlocale(LC_ALL, "rus");
	
	auxil::start();                          // старт генерации 
	t1 = clock();                            // фиксация времени 
	for (int i = 0; i < CYCLE; i++)
	{
		av1 += (double)auxil::iget(-100, 100); // сумма случайных чисел 
		av2 += auxil::dget(-100, 100);         // сумма случайных чисел 
	}
	t2 = clock();                            // фиксация времени 


	std::cout << std::endl << "количество циклов:         " << CYCLE;
	std::cout << std::endl << "среднее значение (int):    " << av1 / CYCLE;
	std::cout << std::endl << "среднее значение (double): " << av2 / CYCLE;
	std::cout << std::endl << "продолжительность (у.е):   " << (t2 - t1);
	std::cout << std::endl << "                  (сек):   "
		<< ((double)(t2 - t1)) / ((double)CLOCKS_PER_SEC);
	std::cout << std::endl;
	system("pause");

	return 0;

	//3
	
	t3 = clock();
	int numbers = 45;				// меняем числа фибоначи 2 лист количество чисел Фибоначи
	auto begin = std::chrono::steady_clock::now();

	auxil::recursion_fibonachi(numbers); //вызов функции

	auto end = std::chrono::steady_clock::now();

	auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
	t4 = clock();
	std::cout << "количество циклов:         " << numbers;
	std::cout << "\nпродолжительность (у.е):   " << (elapsed_ms.count());
	std::cout << "\n                  (сек):   "
		<< ((double)(t4 - t3)) / ((double)CLOCKS_PER_SEC);
	std::cout << std::endl;
	return 0;

}

