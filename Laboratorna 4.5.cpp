// Laboratorna 4.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Манькевич Дар'я
// Лабораторна робота № 4.5
// "Попадання" в плоску фігуру
// Варіант 10

#include <iostream>
#include <iomanip>
#include <time.h>
#include < stdlib.h >

using namespace std;

int main()
{
	double R, a, b, x, y; 

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((a > R && b < R) && (y * y <= (R * R) - (x * x) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
			(y * y > ((R * R) - (x * x)) && y <= b && y > 0 && x >= R && x <= a))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

    for (int i = 0; i < 10; i++)
	{
	   	x = 2*max(a, b, R) * rand() / RAND_MAX - max(a, b, R);
	    y = 2*max(a, b, R) * rand() / RAND_MAX - max(a, b, R);

		if ((a > R && b < R) && (y * y <= (R * R) - (x * x) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
			(y * y > ((R * R) - (x * x)) && y <= b && y > 0 && x >= R && x <= a))
			
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	
	return 0;
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
