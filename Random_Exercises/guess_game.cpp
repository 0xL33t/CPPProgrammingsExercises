#include "../std_lib_facilities.h"


int main() {
	string answer;
	int max = 100;
	int guess = max / 2;
	int min = 0;
	int count = 0;
	
	cout << "The computer is guessing your number!\n";
	cout << "Answer with 'too low','too high' or 'right' \n";
	do
	{
		if(answer == "too low")  
		{
			guess = (guess - min) / 2 + min;
			count++;
	    }
		
		if(answer == "too high") 
		{
			guess = (max - guess) / 2 + guess;
			count++;
		}
		
	}while(answer != "right");

}

