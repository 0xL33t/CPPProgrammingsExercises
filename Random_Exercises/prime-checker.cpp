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
vector<int> primes = {2,3,5};
bool isPrime = false;
for(int i = 2; i <= 100000; i++){
	for(unsigned int o = 0; o < primes.size(); o++){
		if( (i % primes[o]) != 0){
			isPrime = true;
		}else{ isPrime = false; break;}
	}
	if(isPrime) primes.push_back(i);
	isPrime = false;
}
for(unsigned int i = 0; i < primes.size(); i++)
	cout << "Prime Number #" << i << "\t" << primes[i] << endl;

}