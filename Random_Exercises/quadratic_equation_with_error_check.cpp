
#include "../std_lib_facilities.h"

double calc(double a,double b, double c);	

int main() {
	
	double a,b,c,x1,x2;
	char var_temp, op1, op2;
	
	cout << "Please enter a quadratic equation(a*x²+b*x+c): ";
	cin >> a >> var_temp >> var_temp >> var_temp >> var_temp>> op1 >> b >> var_temp >> var_temp >> op2 >> c;
	
	if(op1 == '-') b = -b;
	else
	if(op2 == '-') c = -c;
	else
	if(op1 == '+' && op2 == '+');
	else
	throw runtime_error("Only + or - allowed as operator in quadratic equations!");
	
	x1 = (-b + calc(a,b,c)) / 2*a;
	x2 = (-b - calc(a,b,c)) / 2*a;
	
}

	double calc(double a, double b, double c){
		double answer = (b*b)-4*(a*b);
		if(answer < 0) throw runtime_error("Non-real Root. (= Root is less than 0)");
		else
		return sqrt(answer);
	}