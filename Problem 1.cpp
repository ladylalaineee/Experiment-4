#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, a, b;
	double result;
	char choice; 
	bool abort=false;
	
	cout << "\t MENU:" << endl;
	cout << "\t \t1. Add" << endl;
	cout << "\t \t2. Subtract" << endl;
	cout << "\t \t3. Multiply" << endl;
	cout << "\t \t4. Divide" << endl;
	cout << "\t \t5. Modulus" << endl;
	cout << endl;
	
	do
	{
	cout << "Enter your choice: ";
	cin >> x;
	cout << "Enter your two numbers: ";
	cin >> a >> b;
	
	switch(x)
	{
		case 1:
		result = a+b;
		break;
		
		case 2:
		result = a-b;
		break;
		
		case 3:
		result = a*b;
		break;
		
		case 4:
		result = a/b;
		break;
		
		case 5:
		result = a%b;
		break;
		
		default:
		cout << "Input is invalid. Please try again." << endl;
	}
	
	cout << "Result: " << result << endl;
	cout << endl;
	cout << "Continue? y/n" << endl;
	cin >> choice;
	cout << endl;
	
	switch (choice)
	{
		case 'y':
		case 'Y':
		break;
		
		default:
		abort = true;
	}
}while (!abort);

	return 0;
}
