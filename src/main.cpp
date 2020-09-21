#include <iostream>
#include <random>
#include <ctime>

using std::cout;
using std::cin;

int main(){
    cout << "Guess the number!" << std::endl;

    //gerando um número aleatório baseado nos segundos pasaddos de 1970 até agora. 
    //generating a random number with seconds that has passed since 00:00:00 GMT, January 1, 1970. Ranger: 0 to 100;
    srand(time(NULL));
    int secret_number = rand() % 101;
    
    //A loop.
    while (1) //infity loop
    {
        //Pedindo um número aleatório.
        //Asking for a guess.
        unsigned int guess;
        cout << "Please input your guess" << std::endl;
        cin >> guess;

        //checking if the input was a integer number and if the input was a integer number, the else statement will compared the input with our secret_number
        if(cin.fail()){
            cout << "Please, input only integer numbers" << std::endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }else{
    
            if(guess < secret_number)
            { 
                cout << "Too small!" << std::endl;
            }
            else if(guess == secret_number)
            {
                cout << "You win!!" << std::endl; 
                break;
            }
            else if(guess > secret_number)
            {
                cout << "Too big!" << std::endl;
                continue;
            }
        } 
    } 
}