#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));

	int num = rand() % 50 + 1;
	cout << "The computer has selected a number" << endl;
	int guess;
	while (1)
	{
		cout << "Enter the number you have guessed: ";
		cin >> guess;			
		if (guess > num)
			cout << "too high! Try again" << endl;
		else if (guess < num)
			cout << "too low! Try again" << endl;
		else
		{
			cout << "Correct" << endl;
			break;
		}
	}
}