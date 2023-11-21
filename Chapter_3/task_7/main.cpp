#include <iostream>
#include <string.h>
#include <cstdlib>


using namespace std;

/*
*		������� 7.
*
*		�������� ����� �������: strlen() - ������� ����� ������,
*		strcpy() - ����������� ����� � strcmp() - ��������� �����.
*/


// ���������� ������� strlen(). ��������� ������ char � ���������� �� �����.
int strlength(char* Pchar) 
{
	int max = 0;
	while (*Pchar++) max++;
	return max;
}

// ���������� ������� strcpy(). ��������� ������ c_str_1, ������� ����� ������������ ������� c_str_2.
void strcopy(char* c_str1, char* c_str2)
{
	while (*c_str2++ = *c_str1++);
}


// ���������� ������� strcmp(). ��������� ������ Cchar � Pchar.
int strcomp(char* Cchar, char* Pchar) 
{
	while (true)
	{
		if ((int)*Cchar > (int)*Pchar) {							//	��������� �������� � ������� �������. ���� ������ ���
			return 1;												// ����������� ������ 1-�� ������ ����� ����� ������� ������ �� ���������
		}															// ASCII, ��� 2-��, �� ����� ������������ 1, �� ���� 1-�� ������ ������ 2-��.
		else if ((int)*Cchar < (int)*Pchar) {
			return -1;												//	����� ���������� -1 - ������ 1 ������ ������ 2.
		}
		else {
			Cchar++;												//	���� �� ������ �� ���������� ������� �� �����������, �� ���������
			Pchar++;												// � ���������� ������� � ������ ������.
			if (*Cchar == '\0' && *Pchar == '\0')					//	����� ��������� �� ������������� ��������� �����. �� ����, ���� ���
			{														// ������������ ������������, � �� ���� ���������� ������� �� �����������,
				return 0;											// �� ������ �����. ���������� 0.
			}
			continue;												//	���� �� ��������� ����� �����, �� ��������� � ���������� �������� �����.
		}
	}
}

int main() 
{
	char n[] = "qwerty";											//
	char p[] = "qwertg";											// �������������� ������������ ������
	char copy[] = "iopkal";											//

	cout << strlength(n) << endl << endl;							// ������� ����� ������ n.
	
	strcopy(n, copy);
	cout << n << endl << copy << endl << endl;						// ������� ������ n, � ������������� ������ copy.

	cout << strcomp(n, p);											// ������� ��������� ��������� ����� (1, -1, 0)
}