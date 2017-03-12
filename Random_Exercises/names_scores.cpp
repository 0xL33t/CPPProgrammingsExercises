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
	string name;
	int score;
	vector<string> names;
	vector<int> scores;
	vector<int> positions;
	
	while(true){
		cout << "Enter Name and Score. Each name has to be unique. Terminate with 'NoName 0' \n";
		cin >> name >> score;
		
		if(name == "NoName" && score == 0) break;
		
		for(int i = 0; i < names.size(); i++){
			if(name == names[i]){
				cout << "Name already registered. Program terminates now! \n";
				return -1;
			}
		}
		
		names.push_back(name);
		scores.push_back(score);
	}
	
	cout << "What name do you search for? \n";
	cin >> name;
	for(int i = 0; i < names.size(); i++){
		if(name == names[i]){ 
			cout << names[i] << "\t" << scores[i] << endl;
			break;
		}
		if(i == (names.size() - 1) && name != names[i]) cout << "name not found \n";
	}
	cout << "What score do you search for? \n";
	
	cin >> score;
	
	for(int i = 0; i < scores.size(); i++){
		if(score == scores[i]) positions.push_back(i);
		if(i == (scores.size() - 1) && score != scores[i]){
			cout << "score not found \n";
			return -1;
		}
	}
	for(int i = 0; i < positions.size(); i++)
		cout << names[i] << endl;
}
