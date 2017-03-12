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
int sqr(int x);


int main() {
	vector<string> sequence = {"paul","peter","piet","chris","jay","piet"};
	int counter = 0;
	int max = 0;
	string mode;
	for(int i = 0; i < sequence.size(); i++){
		for(int j = 0; j < sequence.size(); i++){
			if(sequence[i] == sequence[j]) counter += 1;
		}
		if(counter > max){
			max = counter;
			mode = sequence[i];
		}	
	}
	cout << mode << endl;
}


