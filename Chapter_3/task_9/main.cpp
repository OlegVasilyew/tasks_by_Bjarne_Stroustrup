#include <iostream>
#include <string.h>
#include <cstdlib>


using namespace std;

/*
*	   Задание 9.
*	   Напишите функцию cat(), которая получает два параметра-строки и возвращает строку,
*	являющуюся их конкатенацией. Для результирующей строки используйте память, отведенную с
*	помощью new. Напишите функцию rev() для перевертывания строки, переданной ей в качестве
*	параметра. Это означает, что после вызова rev(p) последний символ p станет первым и т.д.
*/

// Реализация функции cat(). Принимает строки str_1 и str_2 для объединения строк. Возвращает новую объединенную строку.
void catt(char* str_1, char* str_2) {

	int la = strlen(str_1);								//   Получаем длину для каждой строки.
	int lb = strlen(str_2);										

	int l = la + lb + 1;

	char* a = new char[l];								//   Создаем новую строку с общей длиной двух объединяемых строк.

	for (int i = 0; i < l; i++)							//   Цикл проходит по каждому символу сначала первой строки, копируя символ
	{										// в новую строку a. После окончания первой строки, цикл проводит ту же 
		if (i < la)								// процедуру, что и с первой строкой.
		{														
			a[i] = *str_1++;
		}
		else
		{
			a[i] = *str_2++;
		}
	}

	cout << a << endl;								// Печатаем объединенную строку в консоль.

	delete[] a;									// Удаляем строку из памяти.
}

// Реализация функции strrev(). Принимает строку p и производит ее инверсию.
void rev(char* p)
{
	int l = strlen(p) - 1;								//   Узнаем длину входящей строки.
	char* Cchar = new char[l];							//   Создаем новую строку, которая послужит копией входящей строки.
	strcopy(p, Cchar);								//   Копируем строку p в строку Cchar.


	for (int i = l; i >= 0; i--)							//   В это цикле проходимся по каждому элементу 2 строк. При том во входящую 
	{										// строку копируются значения с конца.
		p[i] = *Cchar;
		Cchar++;
	}
}

int main() 
{
	char n[] = "qwerty";								//   Инициализируем произвольные строки.
	char p[] = "iopkl";

	catt(n, p);									//   Печатаем результат объединения строк n и p.

	rev(n);
	cout << n;
}
