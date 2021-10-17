#include <stdio.h>
#include <iostream>
using namespace std;




int main()
{
	
	int x;
	int y;
	int valueOne, valueTwo, valueThree, valueFour, valueFive;
	string userResponse;
	
	
	cout << "Welcome to the Magic Trick! Follow all directions! Enter numbers only!\n";
	cout << "Enter the first number of your age: ";
	cin >> x;
	cout << "Enter the second number of your age: ";
	cin >> y;
	//multiply by 5
	valueOne = x * 5;
	//add 3
	valueTwo = valueOne + 3;
	//double it
	valueThree = valueTwo * 2;
	//add second number
	valueFour = valueThree + y;
	//subtract 6
	valueFive = valueFour - 6;
	
	
	cout << valueFive;
	cout << "\nIs this your age?\n";
	cin >> userResponse;
	
	if(userResponse == 'yes' || 'Yes'){
		cout << "You did it! You followed directions and we guessed your age!";
	}
	else {
		cout << "Oh no, try again!";
	}
	
	
	return 0;
}
