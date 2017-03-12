
#include "../std_lib_facilities.h"


int main() {
  vector<int> numbers;
  int temp = 0;
  int n_to_sum = 0; //numbers to summarize
  
  cout << "Please enter the number of values you want to sum:\n";
  cin >> n_to_sum;
  
  cout << "Please enter some integers (press '|' to stop):\n";
  for( ; cin >> temp; )  numbers.push_back(temp);
  
  if(n_to_sum > numbers.size()) error("Less numbers than wanted to summarize or non-integer input!"); //failsafe
  
  temp = 0; //reset temp
  
  for(int i = 0; i < n_to_sum; i++)  temp += numbers[i];
  
  cout << "The sum of the first " << n_to_sum << " numbers ( ";
  for(int i = 0; i < n_to_sum; i++) cout << numbers[i] << " ";
  cout << ") is " << temp << endl;
}