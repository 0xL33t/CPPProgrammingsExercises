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
	double grains = 1;
	vector<double> squares = {1};
	cout << "Total Grains:  " << grains << "\t" << "Current square number: " << squares.size() << '\t' << "Grains pro current square: " << squares[squares.size() - 1] << endl;
	while(squares.size() <= 64){
		squares.push_back((squares[squares.size()-1]) * 2);
		grains += squares[squares.size()-1];
		cout << "Total Grains:  " << grains << "\t" << "Current square number: " << squares.size() << '\t' << "Grains pro current square: " << squares[squares.size() - 1] << endl;



}


}