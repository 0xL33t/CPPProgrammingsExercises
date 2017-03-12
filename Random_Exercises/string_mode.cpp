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
	vector<string> sequence = {"paul","peter","piet","chris","jay","chris","paul","paul"};
	int counter = 0;
	int mod_max = 0; //max counter for mode string
	string max;
	string min;
	string fin_mode;//final mode
	
	
	for(int i = 0; i < sequence.size(); i++){
		for(int j = 0; j < sequence.size(); j++){
			if(sequence[i] == sequence[j]) counter++;
		}
		if(counter > mod_max){
			mod_max = counter;
			fin_mode = sequence[i];
		}	
	}
	
	
	for(int i = 0; i < sequence.size(); i++){
		if(sequence[i] > max || i == 0) max = sequence[i];
		if(sequence[i] < min || i == 0) min = sequence[i];
	}
	cout << "Max string: " << max << " Min string: " << min << " Mode: " << fin_mode << endl;
}

string get_mode_sorted(vector<string> v)

{
    sort(v.begin(),v.end());
    string current_mode = v[0];
    int current_mode_counter = 1;
    string fin_mode = v[0];
    int fin_mode_counter = 1;
    for (int i = 1; i<v.size(); ++i) {
        if (v[i]==current_mode) {
            ++current_mode_counter;
            if (current_mode_counter>fin_mode_counter) {
                fin_mode = current_mode;
                fin_mode_counter = current_mode_counter;
            }
        }
        else {
            current_mode = v[i];
            current_mode_counter = 1;
        }
    }
    cout << "Mode appears " << fin_mode_counter << " time";
    if (fin_mode_counter>1) cout << "s";
    cout << ".\n";
    return fin_mode;
}

