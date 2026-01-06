#include <iostream>
#include <string>
using namespace std;

/*
 * Algorithm Challenge & Problem Solving Level 3 - Challenge #23 Print First Letter of Each Word
 *
 * This program reads a full line of text and prints the first letter of each word in the given string.
 *
 * Engineering Concept:
 * - Text parsing using character-by-character traversal
 * - State tracking to detect word boundaries
 * - Avoiding unnecessary string splitting
 * - Writing efficient and readable string-processing logic
 */

string ReadString()
{
    string Text;
    cout << "Enter your text:\n";
    getline(cin, Text);
    return Text;
}

void PrintFirstLetterOfEachWord(string Text)
{
    bool IsFirstLetter = true;

    cout << "\nFirst letter of each word:\n";

    // Traverse the string character by character
    for (short i = 0; i < Text.length(); i++)
    {
        // If current character is not a space and we are at a word start
        if (Text[i] != ' ' && IsFirstLetter)
        {
            cout << Text[i] << endl;
        }

        // Update state: next character is first letter if current is space
        IsFirstLetter = (Text[i] == ' ');
    }
}

int main()
{
    PrintFirstLetterOfEachWord(ReadString());
    return 0;
}
