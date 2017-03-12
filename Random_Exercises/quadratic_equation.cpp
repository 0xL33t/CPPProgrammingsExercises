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
cout << "What quadratic equation do you want to solve?" << endl;
char op1;
char op2;
int a = 0;
int b = 0;
int c = 0;
int x1 = 0;
int x2 = 0;

cin >> a >> op1 >> b >> op2 >> c;
cout << "Solving " << a << "x²" << op1 << b << "x" << op2 << c << "=0\n";

x1 = (-b + sqrt(sqr(b) - 4 * a * c))/2*a;
x2 = (-b - sqrt(sqr(b) - 4 * a * c))/2*a;

cout << "x1 = " << x1 << " x2 = " << x2 << endl;

}

int sqr(int x){
	return x*x;
}