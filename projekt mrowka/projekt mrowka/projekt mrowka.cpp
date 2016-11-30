// projekt mrowka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int size = 31;
int tab[size][size] = { 0 };
int px = size / 2;
int py = size / 2;
int direction = 0;
int steps = 0;

int main()
{
	std::cout << "How many steps do you want ant to make \n";
	std::cin >> steps;
	for (int b = 0;b < steps;b++) {
		system("cls");
		switch (tab[py][px]) {
		case 1:
			tab[py][px] = 0;
			direction = direction - 1;
			break;
		case 0:
			tab[py][px] = 1;
			direction = direction + 1;
			break;
		}
		switch (direction) {
		case -1:
			direction = 3;
			break;
		case 4:
			direction = 0;
			break;
		}
		switch (direction) {
		case 0:
			py = py + 1;
			break;
		case 1:
			px = px + 1;
			break;
		case 2:
			py = py - 1;
			break;
		case 3:
			px = px - 1;
			break;
		}
		switch (px) {
		case -1:
			px = size - 1;
			break;
		case size:
			px = 0;
			break;
		}
		switch (py) {
		case -1:
			py = size - 1;
			break;
		case size:
			px = 0;
			break;
		}
		std::cout << "step: " << b + 1;
		std::cout << std::endl;
		std::cout << std::endl;
		for (int i = 0;i < size;i++) {
			for (int a = 0;a < size;a++) {
				if (tab[i][a] >= 1) 
					std::cout << "* ";
				else 
					std::cout << ". ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
