// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Arrays" << endl; 

	int values[] = {10, 4, 6, 9, 3};

	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	int valuesLength = sizeof(values) / sizeof(int);

	for (int i=0; i < valuesLength; i++)
	{
		cout << values[i] << " " << flush;
	}
	cout << "-----------------" << endl << flush;

	cout << "Multi-Dimensional Array" << endl;

	string Animals[][3] = {
		{"fox", "dog", "cat"},
		{"mouse", "squirrel", "parrot"}
	};

	//cout << sizeof(Animals) << endl;
	//cout << sizeof(string) << endl;
	//cout << "Length of Animals: " << sizeof(Animals) / sizeof(string) << endl;
	cout << "Size of Animals Slot: " <<sizeof(Animals[0]) << endl;
	//cout << sizeof(Animals) / sizeof(Animals[0]);
	int AnimalLength = sizeof(Animals) / sizeof(string);
	for (int i = 0; i < sizeof(Animals)/sizeof(Animals[0]); i++)
	{
		cout << i << " ";
		for (int j = 0; j < sizeof(Animals[0])/sizeof(string); j++)
		{	
			cout << j << " ";
			cout << Animals[i][j] << " " << flush;
		}
		cout << endl;
	}

}
