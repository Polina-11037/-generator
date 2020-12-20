// arr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>



using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int a = rand() % 10 + 5;
	
	if (a < 10)
	{
		cout << "слишком мало";

	}
	
	else
	{
		cout << "ERROR";


	}
}



