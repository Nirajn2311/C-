#include <iostream>
#include <string.h>

int main()
{
	const int row = 4, col = 7;
	char moreSeats = 'y';
	int tseats = 24, count = 0;
	std::string choice;
	std::string seats[row][col] = {"1", "A1", "B1", "C1", "D1", "E1", "F1", "2", "A2", "B2", "C2", "D2", "E2", "F2", "3", "A3", "B3", "C3", "D3", "E3", "F3", "4", "A4", "B4", "C4", "D4", "E4", "F4"};
	std::string org[row][col] = seats;
	while (moreSeats != 'n')
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				std::cout << seats[i][j] << "\t";
			}
			std::cout << "\n";
		}
		std::cout << "These are the seats available" << std::endl;

		if (count == tseats)
		{
			std::cout << "All seats have been taken" << std::endl;
			break;
		}

		std::cout << "What seat would you like: ";
		std::cin >> choice;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (choice == org[i][j] && seats[i][j] == "X")
				{
					std::cout << "That seat is taken, please try another..." << std::endl;
				}
			}
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (seats[i][j] == choice)
				{
					seats[i][j] = "X";
					count++;
				}
			}
		}

		std::cout << "Would you like to pick another seat [y/n]: ";
		std::cin >> moreSeats;
	}
	system("pause");
}