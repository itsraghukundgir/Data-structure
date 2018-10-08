#include"Header.h"

int main()
{
	sort1 s1;
	int arr[10] = { 10,15,2,8,18,35,40,50,2,70 };
	s1.bubbleSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	s1.selectionSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;	
	s1.insertionSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	_getch();
	return 0;
}