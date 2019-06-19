#include <iostream>
using namespace std;

int main() {
    // Declare variable for user's string
    string line;

    // Declare variable to count vowels
    int vowels;

    // Initialize vowels to 0
    vowels = 0;

    // Ask user to enter a line of string
    cout << "Enter a line of string: ";

    // Capture string which has spaces
    getline(cin, line);

    // int i is 0
    // Iterate until length of string is reached
    // Add 1 to i
    for (int i = 0; i < line.length(); ++i)
    {
        // Checks each for each vowel in the user string, lowercase and uppercase
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' ||
            line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        {
            ++vowels;
        }
    }

    // If there is 1 vowel in the user string
    if(vowels == 1)
    {
        cout << "\n\nYou have " << vowels << " vowel in your string.\n\n" << endl;
    }
    // If there are 0 or more than 1 vowels in the user string
    else
    {
        cout << "\n\nYou have " << vowels << " vowels in your string.\n\n" << endl;
    }

}