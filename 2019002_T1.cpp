// 2019002_T1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int sum=0;
	int array[5] = { 1,2,3,4,5 };
	fstream add;
	add.open("Add.txt", ios::out);
	if ("Add.txt")
	{
		for (int i = 0; i < 5; i++)
		{
			add << array[i] << " ";
		}
		for (int i = 0; i < 5; i++)
		{
			sum = sum + array[i];
		}
		add << "\nSum: " << sum;
		add.close();
	}
	cout << "The retrived array is: ";
	string l;
	add.open("Add.txt", ios::in);
	if (add)
	{
		while (!add.eof())
		{
			add >> l;
			cout << l<< " ";

		}
		add.close();
	}

	







	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
