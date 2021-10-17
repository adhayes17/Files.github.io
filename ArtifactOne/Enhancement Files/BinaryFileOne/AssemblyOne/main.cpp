#include <stdio.h>
#include <iostream>
using namespace std;

string firstName;
string lastName;
string city;
	
int main()
{
	
	cout << "Enter First Name: ";
	cin >> firstName;
	cout << "Enter Last Name: ";
	cin >> lastName;
	cout << "Enter Shipping City: ";
	cin >> city;
	cout << ("Ship to: " + firstName + " " + lastName + ", " + city);
	return 0;
}
