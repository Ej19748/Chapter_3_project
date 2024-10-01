//1.5 cups of sugar
//1 cup of butter
//2.75 cups of flour
//48 cookies
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{  const float SUGAR = 1.5, BUTTER = 1, FLOUR = 2.75, COOKIES = 48;
 float num_cookies, sugar_needed, butter_needed, flour_needed;
 cout << "How many cookies do you want to make? ";
  cin >> num_cookies;
sugar_needed = (SUGAR * num_cookies) / COOKIES;
 flour_needed = (FLOUR * num_cookies) / COOKIES;
 butter_needed = (BUTTER * num_cookies) / COOKIES;
 cout << setprecision(2) << fixed;
 cout << "To make " << num_cookies << " cookies, you will need: \n";
 cout << sugar_needed << " cups of sugar\n";
 cout << butter_needed << " cups of butter\n";
 cout << flour_needed << " cups of flour\n";
 return 0;
}