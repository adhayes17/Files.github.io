#include <stdio.h>
#include <iostream>
using namespace std;

string name;
int age;

int main()
{
	
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	
	if (age >= 18) {
		cout << ("Welcome " + name);
	}
	else {
		cout << ("Invalid User");
	}
	
	return 0;
}
