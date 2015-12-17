/* Bryan Denslow, 12/16/15, Basic C++ Code */

#include <iostream>
#include <string>

using namespace std;

int main()
{
  /* Decalre an Integer/Number variable*/
  int first_user_number;
  int second_user_number;
  int total;
 
  /*Send string to terminal and enter key*/ 
  cout << "Lets Add" << endl;
  cout << "Enter a Number: ";
  
  /*Takes user input and stores in user_number variable. */
  cin >> first_user_number;

  /*Outputs a string, appends the number that was entered, and appends a enter key */
  cout << "Congratulations you have entered number: " << first_user_number << endl;

  /* Ask for 2nd number to add */
  cout << "Enter a number: ";
  
  /* Store 2nd number in variable */
  cin >> second_user_number;
  
  /* add the two numbers */
  total = first_user_number + second_user_number;

  /*output total, and can replace total with (first_user_number + second_user_number) */
  cout << "Your Total is: " << total << endl;

  return 0;
}
