#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int w;
	cout << "������� ����� �������: ";
	cin >> w;
	switch (w)
	{
	case 111:
	{
		short int num, counter = 0;
		cout << "������� �����: ";
		cin >> num;
		printf("%d\n", factorial(num));
	}
	break;
	case 1:
	{
		//1.��������� ��������� � �������� �������������, ���������� ���������� �� ���� �����.
		short int a, b;
		LowerHigherNumber(&a, &b);
	}
	break;
	case 2:
	{
		//2.��������� ��������� � �������� �������������, 
		//���������� ���� �����, ��������� � ����������.
		int a;
		int *b = NULL;
		b = &a;
		printf("������� �����: ");
		scanf("%d", &a);
		LessMoreNumber(b);
	}
	break;
	case 3:
	{
		//5.��������� ���������� �� ������ ����� �����, ��������� ����� ��������� �������.������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.
		//	 1.*� ���������� ������� ����� ����� ��������� :
		//a)����� ���� ��������� �������
		//b)������� �������������� ���� ��������� �������
		//c)����������� �������
		//d)������������ �������
		int matrix[5][5], val = 5, row = 5;
		FillMatrix(matrix, val);
		PrintOutMatrix(matrix, row);
		AmountOfMatrixMaxAndMinValue(matrix, val);
	}
	break;
	case 4:
	{
		//2.� ��������� ������ ����������������(��������, � �������) �� ����� - �������� �������� ���������� � �������.
		//�������� ����������� ������� ��� ������� ������� n ������������� ����� a(n � ����������� �����).
		int number, degree;
		printf("������� �����: ");
		cin >> number;
		printf("������� � ����� ������� ������ ��������: ");
		cin >> degree;
		ExponentiationToDegree(number, degree);
	}
	break;
	case 5:
	{

	}
	break;
	}
}