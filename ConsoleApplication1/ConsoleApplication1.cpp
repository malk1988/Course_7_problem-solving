// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int RandomNumber(int From, int To) {
	int random = rand() % (To - From + 1) + From;
	return random;
}
void FillMatrixArray(int arr[3][3], short Row, short Colm)
{
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Colm; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}

}
void PrintMatrixArray(int arr[3][3], short Row, short Colm) 
{
	for (int i = 0; i < Row; i++) 
	{
		for (int j = 0; j < Colm; j++) 
		{
			cout << setw(3) << arr[i][j]<<"  ";
		}
		cout << "\n";
	}
}
int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixArray(arr, 3, 3);
	cout << "\nPrintArray" << endl;
	PrintMatrixArray(arr, 3, 3);
	system("pause>0");
	
}