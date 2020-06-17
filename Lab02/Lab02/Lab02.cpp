//Cristian Lopez
//6-17-2020
//CS201L
//Lab02

#include<iostream>

using namespace std;

void mainMenu();
void summary();

const double childPrice = 10.95, adultPrice = 19.99, seniorPrice = 18.99, vipPrice = 7.99;
int day = 1, numChildren, numAdults, numSeniors, numVIPs, userNum;
char userInput, upperInput;
bool quit = false;
double dayTotal, combinedTotals;

int main()
{
	cout << "Welcome to Fun Park Menu System !!" << endl;

	while (day < 4)
	{
		cout << "Starting day " << day << endl;
		while (quit == false)
		{
			mainMenu();
		}
		summary();
	}

	cout << "The total for all days is " << combinedTotals << endl;

	return 0;
}

void mainMenu()
{
	cout << "Enter (C)hild, (A)dult, (S)enior, (V)IP or (Q)uit >> ";
	cin >> userInput;
	cout << endl;

	upperInput = toupper(userInput);
	if (upperInput != 'Q')
	{
		switch (upperInput)
		{
		case 'C':
			cout << "How many children? ";
			cin >> userNum;
			numChildren += userNum;
			break;
		case 'A':
			cout << "How many adults? ";
			cin >> userNum;
			numAdults += userNum;
			break;
		case 'S':
			cout << "How many Seniors? ";
			cin >> userNum;
			numSeniors += userNum;
			break;
		case 'V':
			cout << "How many VIPs? ";
			cin >> userNum;
			numVIPs += userNum;
			break;
		default:
			break;
		}
	}
	else
	{
		quit = true;
	}
	cout << endl;
}

void summary()
{
	cout << "Day " << day << endl;
	cout << "	Child " << numChildren << " @ " << childPrice << " = " << numChildren * childPrice << endl;
	cout << "	Adult " << numAdults << " @ " << adultPrice << " = " << numAdults * adultPrice << endl;
	cout << "	Senior " << numSeniors << " @ " << seniorPrice << " = " << numSeniors * seniorPrice << endl;
	cout << "	VIP " << numVIPs << " @ " << vipPrice << " = " << numVIPs * vipPrice << endl;

	dayTotal = (numChildren * childPrice) + (numAdults * adultPrice) + (numSeniors * seniorPrice) + (numVIPs * vipPrice);
	cout << "\n	Total = " << dayTotal << endl;
	cout << "\n";

	day++;
	numChildren = 0;
	numAdults = 0;
	numSeniors = 0;
	numVIPs = 0;
	quit = false;
	combinedTotals += dayTotal;
}



