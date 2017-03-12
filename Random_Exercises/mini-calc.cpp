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

bool calculator(int val1,int val2, char operation);
int get_number();
vector<string> digits = {"zero","one","two","three","four","five","six","seven","eight","nine"};

int main() {
	int val1 = -1;
	int val2 = -1;
	char op;
	cout << "Hello to this simple Calculator \nYou are able to add,subtract,multiply and divide two values. ('|' to exit)\n";
    while(true){
		val1 = get_number();
		cin >> op;
		val2 = get_number();
		
		if(op == '|' || val1 == -1 || val2 == -1){
			cout << "Not a supported digit. Program will exit now! \n";
			return 0;
		}
		calculator(val1,val2,op);
	}
	
}

	bool calculator(int val1, int val2, char operation){
		double result = -1;
		
		switch(operation) { 
		
		case '+':
			result = val1 +val2;
			cout << "The sum of " << digits [val1] << " and " << digits[val2] << " is " << result << ". \n";
			return true;
			break;
		case '-':
			result = val1 - val2;
			cout << "The substraction of " << digits[val1] << " and " << digits[val2] << " is " << result << ". \n";
			return true;
			break;
		case '*':
			result = val1 * val2;
			cout << "The multiplication of " << digits[val1] << " and " << digits[val2] << " is " << result << ". \n";
			return true;
			break;
		case '/':
			result = val1 / val2;
			cout << "The division of " << digits[val1] << " and " << digits[val2] << " is " << result << ". \n"; 
			return true;
			break;
		default:
			cout << "Operator not supported. Program will exit now.";
			return false;
			break;
		}
		
	}
	
	int get_number(){
		int input = 0;
		string inp_s;
		
		if(cin>>input)  return input;
		
		cin.clear();
		cin >> inp_s;
		for(int i = 0; i < 10; i++)
		if(digits[i] == inp_s)
		return i;
		
		
		return -1;
		
		
	}