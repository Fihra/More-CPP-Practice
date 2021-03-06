// Functions2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void showMenu()
{
	string commands[] = { "Search", "View Record", "Quit" };
	int count = 1;
	for (string comm : commands)
	{
		cout << count << ". " << comm << endl;
		count++;
	}
}

int getInput()
{
	cout << "Enter Selection: " << endl;
	int input;
	cin >> input;

	return input;
}

void processSelection(int option)
{
	switch (option)
	{
	case 1:
		cout << "Searching . . ." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;

	}
}

int main()
{
    cout << "Functions" << endl; 

	showMenu();
	int selection = getInput();
	processSelection(selection);


}
