#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	char choice;
	int x;
	int y;
	int z;
	int a;
	long double factorial = 1.0;
	int sum = 0;
	int m;
	
	
	cout << "Choose Option: \n";
	cout << "1 - Factorial\n";
	cout << "2 - Summation\n";
	cout << "3 - Square Root\n";
	cout << "4 - Cubic Root\n";
	cout << "5 - Quit\n";
	cin >> choice;
	
	
		switch(choice) {
			case '1' : cout << "Enter a number: \n";
			cin >> x;
			if(x < 0){
				cout << "Invalid Number!";
			} else {
				for(int i = 1; i <= x; ++i){
					factorial *= i;
					cout << x;
				}
			}
			
			break;
		
			case '2' : cout << "Enter a number: \n";
			cin >> y;
			if(y < 0) {
				cout << "Invalid Number!";
			} else {
				m = y % 10;
				sum = sum + m;
				y = y / 10;
				cout << y;
			}
			
			break;
			
			case '3' : cout << "Enter a number: \n";
			cin >> z;
			if (z < 0) {
				cout << "Invalid Number!";
			} else {
				z = sqrt(z);
				cout << z;
			}
			
			break;
			
			case '4' : cout << "Enter a number: \n";
			cin >> a;
			if (a < 0) {
				cout << "Invalid Number!";
			} else {
				a = cbrt(a);
				cout << a;
			}
			
			break;
		
			case '5' : cout << "Goodbye!";
			break;
			
			default : cout << "Invalid Selection!";
			break;
		}
	
	return 0;
}
