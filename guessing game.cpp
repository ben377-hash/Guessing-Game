#include <iostream>
#include <random>
#include <ctime>

using namespace std; // Using the std namespace

int main() {
    // Use the current time as a seed for the random number generator
    unsigned seed = time(0);

    // Use the seed to seed the random engine
    mt19937 gen(seed);


    // Define the range for the random numbers (e.g., between 1 and 100)
    uniform_int_distribution<int> distribution(1, 100);

    // Defining input
    int num;
    
    cout<<"Enter any number from 1 to 100 "<<endl;
    // Taking input
    cin>>num; 

    // Generate a random number
    int random_number = distribution(gen);
    
    // Checking the input 
    if(num==random_number)
    {
        cout<<"Bingo! you guessed right"<<endl;
    }
    else
    {
        cout<<"Oops! you guessed wrong "<<endl;
        cout << "Random Number: " << random_number << endl;
    }
    
    return 0;
}