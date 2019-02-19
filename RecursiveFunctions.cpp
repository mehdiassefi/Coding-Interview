#include "pch.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
const int SIZE = 4;
int k = 0;

int fact(int i)   // i!
{
	if (i == 0) return 1;
	return i * fact(i - 1);
}

int fib(int i) //Fibonacci sum
{
	if (i == 0) return 0;
	if (i == 1) return 1;
	return fib(i - 1) + fib(i - 2);
}

int Coef(int n, int k) //Binomial coeficients based on Pascal triangle
{
	if (n <2 || k == 0 || k == n)return 1;
	return Coef(n-1, k-1) + Coef(n-1, k);
}

void towersOfHanoi(int n, char from_rod, char to_rod, char aux_rod) //Towers of Hanoi
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}
	towersOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
	towersOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle 
		// itself 
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present 
		// in right subarray 
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not 
	// present in array 
	return -1;
}
/*int main()//BinarySearch
{
	int arr[] = { 2, 3, 4, 10, 40 , 2, 12, 333, 7645, 456 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 7645;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);
	return 0;
}*/
int SumOfSquares(int n)
{
	if (n == 0)return 0;
	return n * n + SumOfSquares(n - 1);
}
string Binary(int i) //Converts a number to a string representing its associated Binary value
{
	string s;
	if (i % 2 == 0) s = '0';
	else s = '1';
	if (i < 2) return s;
	return Binary(i / 2) + s;
}
int main()
{
	//string s = 
	string s = Binary(32768);
	printf("%s\n", s.c_str());
	return 0;
}
