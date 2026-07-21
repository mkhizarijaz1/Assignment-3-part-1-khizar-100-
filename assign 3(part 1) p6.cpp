#include <iostream>
using namespace std;

int length(char word[])
{
    int count = 0;

    while (word[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char word[100];
    cout << "Enter a word : ";
    cin >> word;

    cout << "Length of the word is: " << length(word);

    return 0;
}
