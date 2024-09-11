// Times Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int GetInput(string inputMessage);
void TimesTable(int start, int end, int multiplier);

int main()
{
    int startNumber, endNumber, multiplier = 0;
    while (true) 
    {
        startNumber = GetInput("What position would you like to start in");
        endNumber = GetInput("What position would you like to end in");
        multiplier = GetInput("What times table would you like to see");
        if (startNumber > endNumber)
        {
            cout << "Invalid Start and End position\n";
        }
        else 
        {
            break;
        }
    }
    TimesTable(startNumber, endNumber, multiplier);
}
int GetInput(string inputMessage) 
{
    int userInput = 0;
    while (true)
    {
        string rawInput;
        cout << inputMessage << "\n";
        getline(cin, rawInput);
        try 
        {
            for (char c : rawInput)
            {
                if (isalpha(c))
                {
                    throw (rawInput);
                }
                else if (c == '.') 
                {
                    throw (rawInput);
                }
            }
            userInput = stoi(rawInput);
            break;
        }
        catch (...) 
        {
            cout << "Not a valid input\n";
        }
    }
    return userInput;
}
void TimesTable(int start, int end, int multiplier)
{
    for (int x = start; x <= end; x++) 
    {
        cout << x * multiplier << " ";
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
