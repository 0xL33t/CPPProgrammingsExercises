
#include "../std_lib_facilities.h"


int main() {
  vector <int> series;
  int tmp;
  series.push_back(1);
  series.push_back(1);
  for(int i = 2; i < 50; i++)
  {
	  tmp = series[i-1] + series[i-2];
	  series.push_back(tmp);
  }
  
  cout << "Fibonacci series: ";
  
  for(int i = 0; i < series.size(); i++) cout << series[i] << " "; 
}