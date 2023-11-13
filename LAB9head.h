#pragma once
#define N_Max 100
#include <iostream>
#include <iomanip>

namespace ez
{
	void IN(int matrix[N_Max][N_Max], int& n, int& m);

	void OUT(int matrix[N_Max][N_Max], int n, int m);
	
	int SUM(int number);

	int SUMSTOLB(int matrix[N_Max][N_Max], int& n, int j);

	void MINMAX(int min, int max, int n, int m, int matrix[N_Max][N_Max]);

	void SORT(int n, int sumstolb, int matrix[N_Max][N_Max], int m);
}