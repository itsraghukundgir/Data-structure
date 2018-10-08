#include"Header.h"

int* sort1::bubbleSort(int *arr, int size)
{
	int pass = size - 1;
	int comparision = size - 1;
	
	for (int i = 0; i < pass; i++)
	{
	
		for (int j = 0; j < comparision - i; j++)
		{
			if (arr[j] >arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	return arr;
}

int* sort1::insertionSort(int * arr, int size)
{

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i+1;j< size-i-1; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}

		}
	}
	return arr;
}
int* sort1::selectionSort(int * arr, int size)
{

	for (int i = 0; i <; i++)
	{
		for (int j = ; j++)
		{
			

		}
	}
	return arr;
}
sfhgedufdpghivksdjkv
safdjkngkfn