#include <iostream>
#include <string.h>
#include <cstdlib>


using namespace std;

/*
*		������� 9.
*		�������� ������� cat(), ������� �������� ��� ���������-������ � ���������� ������,
*	���������� �� �������������. ��� �������������� ������ ����������� ������, ���������� �
*	������� new. �������� ������� rev() ��� �������������� ������, ���������� �� � ��������
*	���������. ��� ��������, ��� ����� ������ rev(p) ��������� ������ p ������ ������ � �.�.
*/

// ���������� ������� cat(). ��������� ������ str_1 � str_2 ��� ����������� �����. ���������� ����� ������������ ������.
void catt(char* str_1, char* str_2) {

	int la = strlen(str_1);										// �������� ����� ��� ������ ������.
	int lb = strlen(str_2);										

	int l = la + lb + 1;

	char* a = new char[l];										// ������� ����� ������ � ����� ������ ���� ������������ �����.

	for (int i = 0; i < l; i++)									//	���� �������� �� ������� ������� ������� ������ ������, ������� ������
	{															// � ����� ������ a. ����� ��������� ������ ������, ���� �������� �� �� 
		if (i < la)												// ���������, ��� � � ������ �������.
		{														
			a[i] = *str_1++;
		}
		else
		{
			a[i] = *str_2++;
		}
	}

	cout << a << endl;											// �������� ������������ ������ � �������.

	delete[] a;													// ������� ������ �� ������.
}

// ���������� ������� strrev(). ��������� ������ p � ���������� �� ��������.
void rev(char* p)
{
	int l = strlen(p) - 1;										//	������ ����� �������� ������.
	char* Cchar = new char[l];									//	������� ����� ������, ������� �������� ������ �������� ������.
	strcopy(p, Cchar);											//	�������� ������ p � ������ Cchar.


	for (int i = l; i >= 0; i--)								//	� ��� ����� ���������� �� ������� �������� 2 �����. ��� ��� �� �������� 
	{															// ������ ���������� �������� � �����.
		p[i] = *Cchar;
		Cchar++;
	}
}

int main() 
{
	char n[] = "qwerty";										// �������������� ������������ ������.
	char p[] = "iopkl";

	catt(n, p);													// �������� ��������� ����������� ����� n � p.
}