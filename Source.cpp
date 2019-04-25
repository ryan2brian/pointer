#include <iostream>

using namespace std;
//function protyping 
void badSwap(int x, int y);
void goodSwap(int*const px, int*const py);
int main()
{
	//Starting Values 
	int myMoney = 200;
	int hisMoney = 1000;
	//Prints out the starting Values 
	cout << "Original Values: \n";
	cout << "myMoney: " << myMoney << "\n";
	cout << "hisMoney: " << hisMoney << "\n\n";
	//Prints out the badSwap Variable 
	cout << "Calling badSwap: \n";
	cout << "myMoney: " << myMoney << "\n";
	cout << "hisMoney: " << hisMoney << "\n\n";
	//Prints out goodSwap Variable 
	cout << "Calling goodSwap: \n";
	goodSwap(&myMoney, &hisMoney);
	cout << "myMoney: " << myMoney << "\n";
	cout << "hisMoney: " << hisMoney << "\n\n";

	//Pauses Program
	system("pause");

	return 0;
}
//This is where the points come into use with store the information from the variable prototyping that we did at the start of the program
void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int* const pX, int* const pY)
{
	int temp = *pX;
	*pX = *pY;
	*pY = temp;
}