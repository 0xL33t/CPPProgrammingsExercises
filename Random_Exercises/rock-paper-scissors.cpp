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

string pc_pick();

int main() {
	string pick; //variables for picks
	string ai_pick;
	int i_pick = -1;
	
	
	cout << "Welcome to Rock, Paper, Scissors. Type 'exit' to exit the game.\n";
	
	while(true){
	cout << "Pick one of them: ";
	cin >> pick;
	
	i_pick = -1; //To determine invalid input if value isnt changed
	
	if(pick == "Rock") i_pick = 1; //an int value for each possible answer for switch()
	if(pick == "Paper") i_pick = 2;
	if(pick == "Scissors") i_pick = 3;
	if(pick == "exit") return 0;
	
	ai_pick = pc_pick();  //random choice from the pc is called through a function
	cout << "The PC chose " << ai_pick << endl;
	
	switch(i_pick){  //switch-statement to solve who have won
		
		case 1:   
		
		if(ai_pick == "Scissors"){  //Three possibilities: win, loose and tie
			cout << "You have won! \t Congrats! \n";
			break;}
		if(ai_pick == "Paper"){
			cout << "You have lost! \t Maybe next time :) \n";
			break;}
	    if(ai_pick == "Rock"){
			cout << "Tie! \t No one wins! \n";
			break;}
			
        case 2:   
        
        if(ai_pick == "Rock"){
			cout << "You have won! \t Congrats! \n";
			break;}
		if(ai_pick == "Scissors"){
			cout << "You have lost! \t Maybe next time :) \n";
			break;}
		if(ai_pick == "Paper"){
			cout << "Tie! \t No one wins! \n";
			break;}
			
		case 3:
		
		if(ai_pick == "Paper"){
			cout << "You have won! \t Congrats! \n";
			break;}
		if(ai_pick == "Rock"){
			cout << "You have lost! \t Maybe next time :) \n";
			break;}
		if(ai_pick == "Scissors"){
			cout << "Tie! \t No one wins! \n";
			break;}			
		
		default: //default case in case of unsupported input
		
			cout << "Invalid Input! Program will exit now!\n";
			return -1;
		}
			
			
	}
}


string pc_pick(){ //function for the pcs choice
	int rdm = rand() % 15; //random number from 0 to 14
	
	if(rdm >= 0 && rdm <= 4) //one of three possibility for each answer
		return "Rock";
	if(rdm >= 5 && rdm <= 9)
		return "Paper";
	if(rdm >= 10 && rdm <= 14)
		return "Scissors";
	
	return "error";
}
