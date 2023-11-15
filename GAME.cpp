#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// game function
void game(int userNumber, int computerNumber, int n, int computerScore = 1, int playerScore = 1)
{
    (srand(time(0)));
    computerNumber = (rand() % 10 + 1);
    cout << "Enter the number b/w [0-10]:";
    cin >> userNumber;
    cout << "The computer number is:" << computerNumber << "\nThe User's number is :" << userNumber << endl;
    n = userNumber + computerNumber;
    while (userNumber > 0 && userNumber < 11)
    {
        if (n % 2 == 0)
        {
            cout << "The computer wins....\n";
            cout << "computerScore is:" << computerScore << endl;
            computerScore++;
        }
        else
        {
            cout << "The user wins....\n";
            cout << "playerScore is:" << playerScore << endl;
            playerScore++;
        }
        (srand(time(0)));
        computerNumber = (rand() % 10 + 1);
        cout << "Enter the number b/w [0-10]:";
        cin >> userNumber;
        cout << "The computer number is:" << computerNumber << "\nThe User's number is :" << userNumber << endl;
        n = userNumber + computerNumber;
        cout << endl;
    }
}
// main function
int main()
{
    int computerNumber = 0, userNumber = 0;
    int playerScore = 1, computerScore = 1;
    int n;
    // calling the function
    game(userNumber, computerNumber, n, playerScore, computerScore);
    return 0;
}