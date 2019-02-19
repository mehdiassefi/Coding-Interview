
#include "pch.h"
#include <iostream>
using std::cin; 
using std::cout;
using std::endl;
const int SIZE = 4;

void Matrix_show(int m[SIZE][SIZE])
{
	cout << endl;
	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}

}
void Swap(int& i, int& j)
{
	int tmp = i;
	i = j;
	j = tmp;
}

int main()
{
	
	int m[SIZE][SIZE];
	int count = 0;
	int level = 0;
	int last = SIZE - 1;
	int totNumOfLevels = SIZE / 2;
	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			m[i][j] = count++;
		}
	}

	Matrix_show(m);
	while (level < totNumOfLevels)
	{
		for (int i = level; i < last; ++i)
		{
			Swap(m[level][i], m[i][last]);
			Swap(m[level][i], m[last][last - i + level]);
			Swap(m[level][i], m[last - i + level][level]);
			
		}
		++level;
		--last;
	}
	
	Matrix_show(m);

}

