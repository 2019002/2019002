// 2019002_T2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	
	cout << "Writing to the file" << endl;
	ofstream bio;
	bio.open("Bio.txt");
	if (bio)
	{
		bio << "Name: Abdul Aleem" << endl
			<< "Age: 20";
	}
	bio.close();
	string info;
	ifstream bio2;
	bio2.open("Bio.txt");
	if (bio2)
	{
		while (!bio2.eof())
		{
			bio2 >> info;
			cout << info << " ";
		}
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
