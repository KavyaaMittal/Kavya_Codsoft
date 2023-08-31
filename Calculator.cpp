//declaration for including header files
#include<iostream>
using namespace std;
//main function declaration
int main()
{
	//variable declaration
    int number1, number2;
    char ch;
  //taking input of the numbers to perform the operations
    cout<< "Enter two numbers for mathematical operations" << endl;
    cin >> number1 >> number2; 
  //making choices for the operation to perform
    cout << "Enter your choice" << endl;
    cout << "1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division" << endl;
    cin >> ch;
    //switch case for choosing the right operator to perform a operation needed by the user
    switch(ch)
    {
           	 //case for performing an addition operation
    case '1' : cout << "On adding the numbers the result is ";
             cout<< number1 + number2;
             //case for performing a subtraction operation
    case '2' : cout << "On subtracting the numbers the result is ";
             if(number1>number2)
             cout<< number1-number2;
             else
             cout<< number2-number1;
             //case for performing a multiplication operation
    case '3' : cout << "On multiplying the numbers the result is ";
             cout<< number1*number2;
             //case for performing a division operation
    case '4' : cout << "On diving the numbers the result is ";
             if(number1>number2)
             cout<< number1/number2;
             else
             cout<< number2/number1;
             break;
             //default case if the choice made does not match the provided choices
    default : cout<< "Wrong choice";      
    }                      
}
