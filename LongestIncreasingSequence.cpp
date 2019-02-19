
#include "pch.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
const int SIZE = 8;
int main()
{
	int arr[SIZE] = { 10,22,9,33,21,50,41,60 };
	int LIS[SIZE];
	for (int i = 0; i < SIZE; i++)LIS[i] = 1;
	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] && LIS[i] < LIS[j] + 1)
			{
				LIS[i] = LIS[j] + 1;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)cout<< LIS[i] << " ";

}
