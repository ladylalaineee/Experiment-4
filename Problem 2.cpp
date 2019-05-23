#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int arr[100], size, i, j, temp;
	
	cout << "Selection Sorting..." << endl; 
	cout << endl;
	cout << "Enter array size: ";
	cin >> size;
	cout << "Enter the five elements: ";
	for (i=0; i<size; i++)
	{
		cin >> arr[i];
	}
	cout << "Your data: ";
	for (i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Sorting data..." << endl;
	for (i=0; i<size; i++)
	{
		for (j=i+1; j<size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << "Sorted data: ";
	for (i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	_getch(); 
	return 0;
}
