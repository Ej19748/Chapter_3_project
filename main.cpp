#include <iostream>
using namespace std;
int main() 
{ int random_num1, random_num2, solution;
 cout << "Two random numbers are generated between 1 and 999." << endl << "Add them together and enter the sum" << endl;
 random_num1 = rand() % 999 ;
 random_num2 = rand() % 999 ;
    solution = random_num1 + random_num2;
 cout << " " << random_num1 << endl; 
 cout << "+" << random_num2 << endl;
 cout << "_____" << endl;
 cout << "Please press ENTER on your keyboard to check your answer." << endl;
 cin.get();
 cout << "The answer is: " << solution << endl;
 return 0;
}