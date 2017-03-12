
#include "../std_lib_facilities.h"


int main() {
  vector<double> numbers;
  vector<double> differences;
  double input = 0.0;
  int sum = 0;
  int n_to_sum = 0; //numbers to summarize
  double difference;
  
  
  
  cout << "Please enter the number of values you want to sum:\n";
  cin >> n_to_sum;
  
  cout << "Please enter some integers (press '|' to stop):\n";
  
  for( ; cin >> input; )
  {
		  numbers.push_back(input);
  }
  
  if(n_to_sum > numbers.size()) error("Less numbers there than wanted to summarize or non-integer input!"); //failsafe
  
  sum = 0; //reset sum
  
  for(int i = 0; i < n_to_sum; i++)  sum += numbers[i];
  
  for(int i = 0; i < numbers.size(); i++)  
  {
	  if(i == 0) continue;
	  if(numbers[i] >= numbers[i-1])
	  {
		   difference = numbers[i] - numbers[i-1];
		   differences.push_back(difference);
	   }
	   if(numbers[i-1] > numbers[i])
	   {
		   difference = numbers[i-1] - numbers[i];
		   differences.push_back(difference);
	   }
	}
  
  cout << "The sum of the first " << n_to_sum << " numbers ( ";
  for(int i = 0; i < n_to_sum; i++) cout << numbers[i] << " ";
  cout << ") is " << sum << endl;
  
  cout << "Differences to their adjacent values: ";
  for(int i = 0; i < n_to_sum - 1; i++) cout << differences[i] << " ";
  cout << endl;
}