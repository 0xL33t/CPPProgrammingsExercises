
#include "../std_lib_facilities.h"


int main() {
	int seed = 7117;
	cout << "-----------Bulls & Cows-----------\n";
	cout << "Put in a random number:\n";
	if(!(cin >> seed)) error("Invalid input!");
	srand(seed);
	int sum,tmp,rdm,bulls,cows,guess; //temp = temporary var to hold the true user input
	bulls = 0, cows = 0;
	vector<int> answer;
	vector<int> guessed;
	bool used[10]; //vector to determine which one are used
	
	for(int i = 0; i < 10; i++) used[i] = false;
	for(int i = 0; i < 4; i++) guessed.push_back(0);
	
	for(int i = 0; i < 4; i++)
	{
		rdm = rand() % 10;
		if(used[rdm])  //if used then
		{ 
			for(int j = 0; j < 10; j++) if(!(used[j])) rdm = j; //loop through used and use first unused (false) as number
		}
		
		answer.push_back(rdm);
		used[rdm] = true;
		
	}
	
	sum = (answer[0] * 1000) + (answer[1] * 100) + (answer[2] * 10) + answer[3];
	cout << "Solution for DEBUG-PURPOSES: " << sum << endl; //DEBUG-PURPOSES: Gives out the solution
	cout << "Guess the number by repeated tries (4 digits). A bull means you got a right number in the right position \nand a cow means you got a right number in a wrong position.\n";
	do
	{
		if(!(cin >> guess)) error("Invalid input!");
		tmp = guess; //save user input
		if(guess > 9999) error("Too many digits used!\n");
		guessed[0] = guess / 1000; // to extract the first number
		guess = guess - (guessed[0] * 1000); //subtract first number
		guessed[1] = guess / 100; //extract second number
		guess = guess - (guessed[1] * 100); //subtract second num
		guessed[2] = guess / 10; //extract second num
		guess = guess - (guessed[2] * 10); //..
		guessed[3] = guess;
		guess = tmp; //write user input back to guess
		
		cout << "Your guess:\n";
		for(int i = 0; i < 4; i++) cout << guessed[i];
		cout << endl;
		
		for(int i = 0; i < guessed.size(); i++)
		{
			if(guessed[i] == answer[i]) ++bulls;
			else
			for(int j = 0; j < answer.size(); j++) if(guessed[i] == answer[j]) ++cows;
		}
		
		cout << bulls << " bull and " << cows << " cow\n";
		bulls = 0, cows = 0;
	}while(guess != sum);

	cout << "Congratz! You have won!\n";
}
