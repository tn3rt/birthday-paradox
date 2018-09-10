#include <iostream>
#include <cmath>

double bp_prob(int, int);

int main(){
  int n_people, days_per_year;
  double prob;

  std::cout << "Enter the number of people in the room: ";
  std:: cin >> n_people;
  std::cout << "Enter the number of days in a year: ";
  std:: cin >> days_per_year;

  prob = bp_prob(n_people, days_per_year);
  
  std::cout << "The probability of two people having the same birthday is: " << prob << std::endl;
  
  return 0;
}

double bp_prob(int n_people, int days_per_year) {
  double p = 1 - std::exp( std::lgamma(days_per_year + 1) - 
                              std::lgamma(days_per_year - n_people + 1) - 
                              n_people * std::log(days_per_year)
                            );
  return p;
}
