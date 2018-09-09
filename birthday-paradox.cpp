#include <iostream>
#include <cmath>

int main(){
  int days_per_year = 365;
  int n_people;
  double prob;

  std::cout << "Enter the number of people in the room: ";
  std:: cin >> n_people;

  prob = 1 - std::exp( std::lgamma(days_per_year + 1) - 
                       std::lgamma(days_per_year - n_people + 1) - 
                       n_people * std::log(days_per_year)
                     );

  std::cout << "The probability of two people having the same birthday is: " << prob << std::endl;
  
  return 0;
}
