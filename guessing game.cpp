#include <iostream>
#include <ctime>

using namespace std; 

int main() {
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    cout<<"You have three chances: \n"<<endl;
    int num;
    int x=0;
    while(x<3){
    cout<<"Enter the number: "<<endl;
    cin>>num;
    if(num==random_number)
    {
        cout<<"Bingo! you guessed right"<<endl;
        return 0;
    }
    else
    {
        cout<<"Oops! you guessed wrong "<<endl;
        
    }

    x++;
    }
    cout << "Random Number was  " << random_number << endl;

    
    return 0;
}
