#include <iostream>
using namespace std;

bool findPlayer(char word)
{
    char team[] = {'b', 'r', 's', 'f', 'a'};
    for (int i = 0; i < 5; i++)
    {
        if(team[i] == word)
        {
            return true;
        }
    }
    return false;
}
int main() {
    char word;
    cout << "Enter player name's intial character :";
    cin >> word;

    if (findPlayer(word))
        cout << "Player is in the team";
    else
        cout << "Player not found";
    return 0;
}
