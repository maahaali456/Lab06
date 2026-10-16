// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
int main()
{
	int first, second;
	cout << "enter first number";
	cin >> first;
	cout << "enter second number";
	cin >> second;
	bool a = first == second;
	bool b = first != second;
	bool c = first > second;
	bool d = first < second;
	bool e = first >= second;
	bool f = first <= second;

	cout << " --- COMPARISIONS--- ";
	cout << "first==second " << a << endl;
	cout << "first!=second " << b << endl;
	cout << "first>second " << c << endl;
	cout << "first<second " << d << endl;
	cout << "first>=second " << e << endl;
	cout << "first<=second" << f << endl;
	cout << "the sum of numbers is " << first + second << endl;
	return 0;
}

