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
cout << "How many primes do you want to print out?\n";
int limit = 0;
cin >> limit;
int max = 0;
int counter = 0;
vector<bool> notPrime;
vector<int> primes;

if(limit > 168){
max = 500000;
for(int i = 2; i <= max; i++) notPrime.push_back(false); //gegebene Nummer - 2 ist jeweils der Index

for(int i = 2; i <= sqrt(max); i++){
	counter = i;
	while(counter <= max){
		counter += i;
		if(counter <= max) notPrime[counter-2] = true;
	}
}

for(unsigned int i = 0; i < notPrime.size(); i++){
	if(!(notPrime[i]))
	primes.push_back(i+2);
}
}else{
max = 1000;
for(int i = 2; i <= max; i++) notPrime.push_back(false); //gegebene Nummer - 2 ist jeweils der Index

for(int i = 2; i <= sqrt(max); i++){
	counter = i;
	while(counter <= max){
		counter += i;
		if(counter <= max) notPrime[counter-2] = true;
	}
}

for(unsigned int i = 0; i < notPrime.size(); i++){
	if(!(notPrime[i]))
	primes.push_back(i+2);
}
}
for(unsigned int i = 0; i < limit; i++)
	cout << "Prime #" << i+1 << " " << primes[i] << endl;

}


