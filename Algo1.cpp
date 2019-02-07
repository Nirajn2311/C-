#include <iostream>
#include <string>

// Main function
int main()
{
	// Declare and init variables
	// consts for array sizes
	const int arrSize = 4;
	char moreSeats = 'y';
	int rowChoice = 0, count = 0, totalSeats = 24;
	std::string choice;

	int row[arrSize] = {1, 2, 3, 4};
	std::string seatA[arrSize] = {"A1", "A2", "A3", "A4"};
	std::string seatB[arrSize] = {"B1", "B2", "B3", "B4"};
	std::string seatC[arrSize] = {"C1", "C2", "C3", "C4"};
	std::string seatD[arrSize] = {"D1", "D2", "D3", "D4"};
	std::string seatE[arrSize] = {"E1", "E2", "E3", "E4"};
	std::string seatF[arrSize] = {"F1", "F2", "F3", "F4"};

	for (int i = 0; i < 4; i++)
	{
		std::cout << row[i] << "\t" << seatA[i] << "\t" << seatB[i] << "\t" << seatC[i] << "\t" << seatD[i] << "\t" << seatE[i] << "\t" << seatF[i] << std::endl;
	}

	while (moreSeats != 'n')
	{
		if (count == totalSeats)
		{
			std::cout << "There are no more seats!" << std::endl;
			break;
		}

		std::cout << "What row would you like to sit in: ";
		std::cin >> rowChoice;

		std::cout << "What seat: ";
		std::cin >> choice;

		if (rowChoice == 1)
		{
			if (choice == "A1" && seatA[0] != "X")
			{
				seatA[0] = "X";
			}
			else if (choice == "B1" && seatB[0] != "X")
			{
				seatB[0] = "X";
			}
			else if (choice == "C1" && seatC[0] != "X")
			{
				seatC[0] = "X";
			}
			else if (choice == "D1" && seatD[0] != "X")
			{
				seatD[0] = "X";
			}
			else if (choice == "E1" && seatE[0] != "X")
			{
				seatE[0] = "X";
			}
			else if (choice == "F1" && seatF[0] != "X")
			{
				seatF[0] = "X";
			}
			else
			{
				if (choice != "A1" && choice != "B1" && choice != "C1" && choice != "D1" && choice != "E1" && choice != "F1")
				{
					std::cout << "You didn't pick a seat in this row" << std::endl;
					count--;
				}
				else
				{
					std::cout << "Seat's taken..." << std::endl;
					count--;
				}
			}
		}
		else if (rowChoice == 2)
		{
			if (choice == "A2" && seatA[1] != "X")
			{
				seatA[1] = "X";
			}
			else if (choice == "B2" && seatB[1] != "X")
			{
				seatB[1] = "X";
			}
			else if (choice == "C2" && seatC[1] != "X")
			{
				seatC[1] = "X";
			}
			else if (choice == "D2" && seatD[1] != "X")
			{
				seatD[1] = "X";
			}
			else if (choice == "E2" && seatE[1] != "X")
			{
				seatE[1] = "X";
			}
			else if (choice == "F2" && seatF[1] != "X")
			{
				seatF[1] = "X";
			}
			else
			{
				std::cout << "Seats taken..." << std::endl;
				count--;
			}
		}
		else if (rowChoice == 3)
		{
			if (choice == "A3" && seatA[2] != "X")
			{
				seatA[2] = "X";
			}
			else if (choice == "B3" && seatB[2] != "X")
			{
				seatB[2] = "X";
			}
			else if (choice == "C3" && seatC[2] != "X")
			{
				seatC[2] = "X";
			}
			else if (choice == "D3" && seatD[2] != "X")
			{
				seatD[2] = "X";
			}
			else if (choice == "E3" && seatE[2] != "X")
			{
				seatE[2] = "X";
			}
			else if (choice == "F3" && seatF[2] != "X")
			{
				seatF[2] = "X";
			}
			else
			{
				std::cout << "Seats taken..." << std::endl;
				count--;
			}
		}
		else if (rowChoice == 4)
		{
			if (choice == "A4" && seatA[3] != "X")
			{
				seatA[3] = "X";
			}
			else if (choice == "B4" && seatB[3] != "X")
			{
				seatB[3] = "X";
			}
			else if (choice == "C4" && seatC[3] != "X")
			{
				seatC[3] = "X";
			}
			else if (choice == "D4" && seatD[3] != "X")
			{
				seatD[3] = "X";
			}
			else if (choice == "E4" && seatE[3] != "X")
			{
				seatE[3] = "X";
			}
			else if (choice == "F4" && seatF[3] != "X")
			{
				seatF[3] = "X";
			}
			else
			{
				std::cout << "Seats taken..." << std::endl;
				count--;
			}
		}
		else
		{
			std::cout << "INVALID ROW NUMBER!!!" << std::endl;
		}

		for (int i = 0; i < 4; i++)
		{
			std::cout << row[i] << "\t" << seatA[i] << "\t" << seatB[i] << "\t" << seatC[i] << "\t" << seatD[i] << "\t" << seatE[i] << "\t" << seatF[i] << std::endl;
		}

		std::cout << "Would you like to pick another seat [y/n]: ";
		std::cin >> moreSeats;

		count++;
	}

	system("pause");
}