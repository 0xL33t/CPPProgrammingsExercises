#include "../std_lib_facilities.h"
#include <string.h>
#include <stdio.h>

int main() {
	char answer[10];
	int max = 100;
	int guess = max / 2;
	int min = 0;
	int count = 0;
	
	cout << "The computer is guessing your number!\n";
	cout << "Answer with 'too low','too high' or 'right' \n";
	do
	{
		cin.clear();
		cout << "Is the number " << guess << endl;
		cin.getline(answer,10);
		if(strcmp(answer, "too low") == 0)  
		{
			cout << "low\n";
			min = guess;
			guess = (max - guess) / 2 + guess;
			
			count++;
		}else{
		if(strcmp(answer, "too high") == 0) 
		{
			cout << "high\n";
			max = guess;
			guess = (guess - min) / 2 + min;
			count++;
		}else{
		if(strcmp(answer, "right") == 0) {
			//do nothing
		}else{
			error("Invalid input!!!");
		}
		}
		}
		
	} while(strcmp(answer, "right") != 0);

}

