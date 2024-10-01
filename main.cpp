//Interest rate is 4.25%
//Times compounded is 12
//Principal is $1000
//Interest is $43.34
//Amount in savings is $1043.34
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{ float principal, rate, amount, total_interest;
  int times_compounded;
  cout << "What is the principal? ";
  cin >> principal;
  cout << "What is the interest rate? ";
  cin >> rate;
  cout << "How many times is the interest compounded? ";
  cin >> times_compounded;
  rate = rate/100;
  amount = principal * pow((1 + rate/times_compounded), times_compounded);
  total_interest = amount - principal;
  cout << setprecision(2) << fixed;
  cout << "Interest Rate: " << rate*100 << "%" << endl;
  cout << "Times Compounded: " << times_compounded << endl;
  cout << "Principal: $" << principal << endl;
  cout << "Interest: $" << total_interest << endl;
    return 0;
}