// Game Inventory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Game
{
	int sku;
	string title;
	string publisher;
	string devStudio;
	string platforms;
	double MSRP;
	int copies;
};

void menu(Game gameInventory[], int size)
{
	for (int x = 0; x < size; x++)
	{
		cout << "Enter a game title: ";
		cin >> gameInventory[x].title;

		cout << "Enter a SKU: ";
		cin >> gameInventory[x].sku;

		cout << "Enter the game developer: ";
		cin >> gameInventory[x].devStudio;

		cout << "Enter the game publisher: ";
		cin >> gameInventory[x].publisher;

		cout << "Enter the number of copies: ";
		cin >> gameInventory[x].copies;
	}

	cout << "Here are the games curently entered: ";
	for (int x = 0; x < size; x++)
	{
		cout << "Title: " << gameInventory[x].title;
		cout << "SKU: " << gameInventory[x].sku;
		cout << "DevStudio: " << gameInventory[x].devStudio;
		cout << "MSRP: " << gameInventory[x].MSRP;
		cout << "Publisher: " << gameInventory[x].publisher;
		cout << "Copies: " << gameInventory[x].copies;
	}
}

int main()
{
	const int size = 5;
	Game gameInventory[size];
	menu(gameInventory, size);

    return 0;
}

