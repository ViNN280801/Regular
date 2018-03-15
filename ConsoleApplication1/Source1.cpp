#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"
using namespace std;
//1.Написать рекурсивную функцию для вычисления факториала натурального числа n.
int factorial(int num)
{
	if (num == 0)
		return 1;
	return num*factorial(num - 1);
}
void LowerHigherNumber(short int *a, short int *b)
{
	*a = 1 + rand() % 40;
	*b = 1 + rand() % 40;
	if (*a > *b)
		cout << *a << " > " << *b << endl;
	else if (*a < *b)
		cout << *a << " < " << *b << endl;
	else if (*a == *b)
		cout << *a << " = " << *b << endl;
}
void LessMoreNumber(int *a)
{
	if (*a < 0)
		printf("Число отрицательное. \n");
	else
		printf("Число положительное. \n");
}
void FillMatrix(int(*matrix)[5], int val)
{
	for (short int i = 0; i < val; i++)
		for (short int j = 0; j < val; j++)
			*(*(matrix + i) + j) = 1 + rand() % 55;
}
void PrintOutMatrix(int(*matrix)[5], int row)
{
	for (short int i = 0; i < row; i++)
	{
		for (short int j = 0; j < row; j++)
		{
			printf("%d\t", *(*(matrix + i) + j));
		}
		printf("\n");
	}
}
void AmountOfMatrixMaxAndMinValue(int(*matrix)[5], int val)
{
	int amount = 0, min = *matrix[0], max = *matrix[0];
	for (short int i = 0; i < val; i++)
		for (short int j = 0; j < val; j++)
		{
			amount += *(*matrix + i) + j;
		}
	printf("Сумма всех элементов массива составляет %d\n", amount);
	printf("Среднее арифметическое всех элеметов масива составляет %d\n", amount / 25);
	for (int i = 0;i < val;i++)
	{
		for (int j = 0;j < val;j++)
		{
			if (*(*(matrix + i) + j) < min)
				min = *(*(matrix + i) + j);
			if (*(*(matrix + i) + j) > max)
				max = *(*(matrix + i) + j);
			amount += *(*(matrix + i) + j);
		}
	}	printf("Минимальный элемент массива - %d\n", min);
	printf("Максимальный элемент массива - %d\n", max);
}
int ExponentiationToDegree(int num, int degree)
{
	int result;
	if (degree == 0)
		return num;
	result = num * ExponentiationToDegree(num, degree - 1);
	printf("pow(%d, %d) = %d\n", num, degree + 1, result);
	return num * ExponentiationToDegree(num, degree - 1);
}