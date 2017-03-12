#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>

using namespace std;

//Calculator

int main() {
	cout << "Hello to this simple Calculator \nYou are able to add,subtract,multiply and divide two values. ('|' to exit)\n";
	double val1;
	double val2;
	double result;
	char operation;
	

	while(cout << "Calc this: " && cin >> val1 >> operation >> val2){
	
	switch(operation) { 
		
		case '+':
			result = val1 +val2;
			cout << "The sum of " << val1 << " and " << val2 << " is " << result << ". \n";
			break;
		case '-':
			result = val1 - val2;
			cout << "The substraction of " << val1 << " and " << val2 << " is " << result << ". \n";
			break;
		case '*':
			result = val1 * val2;
			cout << "The multiplication of " << val1 << " and " << val2 << " is " << result << ". \n";
			break;
		case '/':
			result = val1 / val2;
			cout << "The division of " << val1 << " and " << val2 << " is " << result << ". \n";
			break;
		default:
			cout << "Operator not supported. Program will exit now.";
			return -1;
			break;
		}
		}
	}
		
	
	