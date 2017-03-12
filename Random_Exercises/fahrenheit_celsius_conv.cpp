
#include "../std_lib_facilities.h"

	double ftoc(double f);
	double ctof(double c);
	
int main() {
	double input_temp = 0; //declare input and output variables for the temps
	double output_temp = 0; 
	char unit;
	
	cout << "What temperature do you want to convert? ('c' for celsius and 'f' for fahrenheit)\n";
	cin >> input_temp >> unit;
	
	switch(unit) {
		
		case 'f': 
			output_temp = ftoc(input_temp);
			cout << "Result: " << output_temp << " degrees Celsius\n";
			return 0;
		case 'c':
			output_temp = ctof(input_temp);
			cout << "Result: " << output_temp << " degrees Fahrenheit\n";
			return 0;
		default:
			simple_error("Unit has to be either Celsius ('c') or Fahrenheit('f')!");
	}
	
}


double ftoc(double f){  //Func to convert Fahrenheit to Celsius
	double c = (f - 32) * 5/9;
	if(c < -273.25) simple_error("Absolute temperature minumum exceeded!"); //error handling
	return c;
	
}

double ctof(double c){  //Func to convert Celsius to Fahrenheit
	if(c < -273.25) simple_error("Absolute temperature minumum exceeded!");
	double f = (9.0/5.0) * c + 32; 
	return f;
}