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

int main() {
	
	int upperBound = 100;
	int lowerBound = 0;
	int middle = upperBound / 2;
	int attemps = 0;
	char input;
	
	cout << "Number Guessing Game: \n \n" << "Guess a number between 0 and 100.\n" << "Type '=' if its the guessed number or type either '<' if its less or '>' if its more.\n";
	while(input != '='){
		cout << "Is the number " << middle << " ? \n";
		cin >> input;
	if(input == '<'){
		upperBound = middle;
		middle = (middle - lowerBound) / 2 + lowerBound;
		++attemps;
	}
	if(input == '>'){
		lowerBound = middle;
		middle = (upperBound - middle) /2 + middle;
		++attemps;
	}
}
	cout << "I finished the Game with " << attemps << " attemps. \n";
	
	}