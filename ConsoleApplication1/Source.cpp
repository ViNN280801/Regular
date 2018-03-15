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
	cout << "Введите номер задания: ";
	cin >> w;
	switch (w)
	{
	case 111:
	{
		short int num, counter = 0;
		cout << "Введите число: ";
		cin >> num;
		printf("%d\n", factorial(num));
	}
	break;
	case 1:
	{
		//1.Используя указатели и оператор разыменования, определить наибольшее из двух чисел.
		short int a, b;
		LowerHigherNumber(&a, &b);
	}
	break;
	case 2:
	{
		//2.Используя указатели и оператор разыменования, 
		//определить знак числа, введённого с клавиатуры.
		int a;
		int *b = NULL;
		b = &a;
		printf("Введите число: ");
		scanf("%d", &a);
		LessMoreNumber(b);
	}
	break;
	case 3:
	{
		//5.Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива.Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
		//	 1.*В двухмерном массиве целых числе посчитать :
		//a)сумму всех элементов массива
		//b)среднее арифметическое всех элементов массива
		//c)минимальный элемент
		//d)максимальный элемент
		int matrix[5][5], val = 5, row = 5;
		FillMatrix(matrix, val);
		PrintOutMatrix(matrix, row);
		AmountOfMatrixMaxAndMinValue(matrix, val);
	}
	break;
	case 4:
	{
		//2.В некоторых языках программирования(например, в Паскале) не преду - смотрена операция возведения в степень.
		//Написать рекурсивную функцию для расчета степени n вещественного числа a(n — натуральное число).
		int number, degree;
		printf("Введите число: ");
		cin >> number;
		printf("Введите в какую степень хотите возвести: ");
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