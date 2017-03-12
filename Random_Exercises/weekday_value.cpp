
#include "../std_lib_facilities.h"


int main() {
	vector<int> mon,tue,wed,thu,fri,sat,sun;
	int input,rejVal; //value for user input, rejected values
	int monSum = 0; //sums for the weekdays
	int tueSum = 0;
	int wedSum = 0;
	int thuSum = 0;
	int friSum = 0;
	int satSum = 0;
	int sunSum = 0;
	string wDay;
	
	cout << "---------- Values for days of the week ----------\n";
	
	do
	{
	cout << "Put in a day of the week and a value (type 'exit' to calc the data): ";
	if(!(cin >> wDay >> input)) break;
	transform(wDay.begin(), wDay.end(), wDay.begin(), ::tolower); //convert string to lowercase
	//cout << wDay << endl; //debug
	if(wDay == "monday") mon.push_back(input);
	else
	if(wDay == "mon") mon.push_back(input);
	else
	if(wDay == "tuesday") tue.push_back(input);
	else
	if(wDay == "tue") tue.push_back(input);
	else
	if(wDay == "wednesday") wed.push_back(input);
	else
	if(wDay == "wed") wed.push_back(input);
	else
	if(wDay == "thursday") thu.push_back(input);
	else
	if(wDay == "thu") thu.push_back(input);
	else
	if(wDay == "friday") fri.push_back(input);
	else
	if(wDay == "fri") fri.push_back(input);
	else
	if(wDay == "saturday") sat.push_back(input);
	else
	if(wDay == "sat") sat.push_back(input);
	else
	if(wDay == "sunday") sun.push_back(input);
	else
	if(wDay == "sun") sun.push_back(input);
	else
	if(wDay != "exit")
	{
	cout << "Rejected!\n";
	rejVal++;
}

}while(wDay != "exit");
	
	for(int i = 0; i < mon.size(); i++) monSum += mon[i];
	for(int i = 0; i < tue.size(); i++) tueSum += tue[i];
	for(int i = 0; i < wed.size(); i++) wedSum += wed[i];
	for(int i = 0; i < thu.size(); i++) thuSum += thu[i];
	for(int i = 0; i < fri.size(); i++) friSum += fri[i];
	for(int i = 0; i < sat.size(); i++) satSum += sat[i];
	for(int i = 0; i < sun.size(); i++) sunSum += sun[i];
	
	cout << "Rejected values (wrong/invalid week-day names):\t" << rejVal << endl;
	cout << "Sum of values for Monday:\t" << monSum << endl;
	cout << "Sum of values for Tuesday:\t" << tueSum << endl;
	cout << "Sum of values for Wednesday:\t" << wedSum << endl;
	cout << "Sum of values for Thursday:\t" << thuSum << endl;
	cout << "Sum of values for Friday:\t" << friSum << endl;
	cout << "Sum of values for Saturday:\t" << satSum << endl;
	cout << "Sum of values for Sunday:\t" << sunSum << endl;
	
}