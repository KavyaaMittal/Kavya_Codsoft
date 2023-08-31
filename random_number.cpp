#include<iostream>
#include<cstdlib> // including library which includes rand function
using namespace std;
int main()
{
    cout<<"Enter the lower bound of the range"<<endl;
    int Lower_Range; 
    cin>>Lower_Range; //Taking input(Lower Range) from the user 
    cout<<"Enter the upper bound of the range"<<endl;
    int Upper_Range; 
    cin>>Upper_Range; //Taking input(Upper Range) from the user
    int Random_No=(rand()%(Upper_Range-Lower_Range+1))+Lower_Range; //Finding the random number using rand lib
    int Guess;
    cout<<"Enter the number between Range"<<endl<<endl;
    
    while(true)
    {
        cout<<"Enter the guess number"<<endl;
        cin>>Guess; // Asking user to enter the Random number between the range
        if(Guess==Random_No)
        {
            cout<<"Congratulations! You guessed the number correctly"<<endl;
            break; //Coming out of the loop when the number is guessed corectly
        }
        else if(Guess<Random_No)
        {
            cout<<"Guess is lower than the actual number"<<endl;
        }
        else
        {
            cout<<"Guess is higher than the actual number"<<endl;
        }
    }
}
