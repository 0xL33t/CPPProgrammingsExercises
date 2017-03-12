#include "../std_lib_facilities.h"

double ctok(double c);
double ktoc(double k);
const double kelvin_convert = 273.15;

int main() {
	double input_temp = 0; //declare variables
	double output_temp = 0;
	char unit;
	
	cout << "What temperature do you want to convert? ('k' for kelvin or 'c' for celsius)\n";
	cin >> input_temp >> unit; 
	
	if(unit == 'c'){ //celsius to kelvin
		
		output_temp = ctok(input_temp);
		cout << "Result: " << output_temp << " Kelvin\n";
		return 0;
	}else{
	if(unit == 'k'){  //kelvin to celsius
		output_temp = ktoc(input_temp);
		cout << "Result: " << output_temp << " Celsius\n";
	}else{ 
	error("You need to input a valid unit ('k' for kelvin or 'c' for celsius)");
	return 1;
}
}
}
double ctok(double c){
	if(c < -kelvin_convert) error("273.15 °C is the minimum temperature!");
	double k = c + kelvin_convert;
	return k;
}

double ktoc(double k){
	if(k < 0) error("0 Kelvin is the absolute minimum temperature!");
	double c = k - kelvin_convert;
	return c;
}