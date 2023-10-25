#include <iostream>
using namespace std;
int main()
{
    string player1;
    string player2;

    cout << "Player 1 ";
    cin >> player1;
    cout << "Player 2 ";
    cin >> player2;
    if (player1 == "rock")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 1 WON!!! \x1b[0m";
    }
    if (player2 == "rock")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 2 WON!!! \x1b[0m";
    }
    if (player1 == "scissor" && player2 == "paper")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 1 WON!!! \x1b[0m";
    }
    if (player2 == "scissor" && player1 == "paper")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 2 WON!!! \x1b[0m";
    }
    if (player2 == "scissor" && player1 == "rock")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 1 WON!!! \x1b[0m";
    }
    if (player1 == "scissor" && player2 == "rock")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 2 WON!!! \x1b[0m";
    }
    if (player2 == "paper" && player1 == "rock")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 1 WON!!! \x1b[0m";
    }
    if (player1 == "paper" && player2 == "rock")
    {
        cout << "\x1b[42m\x1b[30m Congratulations... Player 2 WON!!! \x1b[0m";
    }
    return 0;
}