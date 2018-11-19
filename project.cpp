#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <process.h>
#include <ctype.h>
#include <iomanip.h>
#include <dos.h>
#include <stdlib.h>

class Railway_Station
{
	char Station_Name[50];
	unsigned int Station_Number;
	float fare;

  public:
	void display();
	void amount(int a, int b, int c);

	void add_data();
	void modify();
	int Station_Numb();
	char *Station_name();
};

void Railway_Station::display()
{
	cout << Station_Name << "\t";
}

void Railway_Station::amount(int a, int b, int c)
{
	cout << "Total Stations = " << fabs((a - b));
	cout << "\nCharges Per Station = " << c;
	fare = fabs((a - b)) * c;
	cout << "\nTicket Cost : " << fare << " AED";
}

void Railway_Station::add_data()
{
	cout << "Enter Station Name : ";

	gets(Station_Name);
	cout << "Enter Station Number : ";
	cin >> Station_Number;
}

void Railway_Station::modify()
{
	cout << "Enter Railway Station Name : ";
	gets(Station_Name);
	cout << "Enter Station Number : ";
	cin >> Station_Number;
}

int Railway_Station::Station_Numb()
{
	return Station_Number;
}

char *Railway_Station::Station_name()
{
	return Station_Name;
}

Railway_Station Station;
char from[40], to[40];
int Station1, Station2, perStation = 2;
char station_search[50];
long Position;

void main()
{
	clrscr();
	textcolor(WHITE);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << " ";
	cout << "Loading...";
	window(5, 20, 70, 25);
	for (int x = 0; x < 70; x++)
	{
		printf("%c", 219);
		delay(40);
	}
	window(5, 23, 55, 25);
	printf("Done");

	getch();
	clrscr();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	int i, z, option;
	char StationChange;
	void detail();
	char Repeat[4];
	strcpy("yes", Repeat);

	cout << "\t\t\t WELCOME TO METRO SERVICES \n";
	do
	{
		for (i = 0; i < 80; i++)
		{
			cout << "-";
		}
		cout << "Enter you choice \n\n1.Add New Railway Station";
		cout << "\n2.Book Ticket";
		cout << "\n3.Change per Station Rate";
		cout << "\n4.Modify Database of Train";
		cout << "\n5.Exit \n";
		for (i = 0; i < 80; i++)

		{
			cout << "-";
		}
		cout << "Enter Option : ";
		cin >> option;
		switch (option)
		{

		case 1:
		{
			ofstream fout("train.dat", ios::binary | ios::app);
			Station.add_data();
			fout.write((char *)&Station, sizeof(Station));
			fout.close();
			break;
		}

		case 2:
		{
			ifstream fin("train.dat", ios::binary);
			detail();
			while (fin)

			{
				fin.read((char *)&Station, sizeof(Station));
				if (0 == strcmp(from, Station.Station_name()))
				{
					Station1 = Station.Station_Numb();
				}
				if (0 == strcmp(to, Station.Station_name()))
				{
					Station2 = Station.Station_Numb();
				}
				if (Station1 && Station2)
				{
					Station.amount(Station1, Station2, perStation);
					getch();
					break;
				}
				if (fin.eof())
				{
					cout << "\n Station Not Found";
					getch();
				}
			}

			fin.close();
			break;
		}

		case 3:
		{
			cout << "Enter the new Per Station Rate";
			cin >> perStation;
			break;
		}

		case 4:
		{
			cout << "Enter the Railway Station to be Changed";
			gets(station_search);
			ifstream fin("train.dat", ios::binary);
			while (fin)
			{
				fin.read((char *)&Station, sizeof(Station));
				Position = fin.tellg();
				if (0 == strcmp(station_search, Station.Station_name()))
				{

					fin.seekg((-1 * sizeof(Station), ios::cur));
					Station.modify();
					fin.close();
					ofstream fout("train.dat", ios::app);
					fout.seekp(Position, ios::beg);
					fout.write((char *)&Station, sizeof(Station));
					cout << "Record Updated";
					fout.close();
					break;
				}
				else if (fin.eof())
				{
					cout << "\n Station not FOUND \n";
					getch();
				}
			}
		}

		case 5:
		{
			cout << "\n Thank You for using METRO Railways";
			getch();

			exit(0);
			break;
		}

		default:
		{
			cout << "Entered Wrong Option";
			getch();
			exit(0);
		}
		}
		cout << "\nDo you wish to do another update (yes/no): ";
		gets(Repeat);
		for (z = 0; z < 4; z++)
		{
			Repeat[i] = tolower(Repeat[i]);
		}
	} while (0 == strcmp("yes", Repeat));
	getch();
}

void detail()
{
cout<<"Choose from the following Stations (EXACTLY AS GIVEN IN
LIST) : \n";
ifstream fin("train.dat",ios::binary);
while (fin)
{
	fin.read((char *)&Station, sizeof(Station));
	Station.display();
}
cout << "\nFROM : ";
gets(from);
cout << "TO : ";
gets(to);
};